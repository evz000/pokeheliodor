import argparse
import os
from PIL import Image

def index_image_with_ref(image_path, ref_image_path):
    
    # from https://stackoverflow.com/questions/29433243/convert-image-to-specific-palette-using-pil-without-dithering
    # get palette from ref image
    oldimage = Image.open(ref_image_path)
    pal = oldimage.getpalette()
    
    # create transient image to store pal
    palimage = Image.new('P',oldimage.size)
    palimage.putpalette(pal)
    
    # load image of interest and force index through quantize, dither = False is NEEDED
    newimage = Image.open(image_path)
    newimage = newimage.convert('RGB')
    newimage = newimage.quantize(palette = palimage, dither = False)

    return newimage


if __name__ == "__main__":
    # Parse command-line arguments
    parser = argparse.ArgumentParser(description="Index an image using the palette from a reference image. You must make sure they share the same colors though.")
    parser.add_argument("-in", dest="image_path", required=True, help="Path to the input non-indexed image")
    parser.add_argument("-ref", dest="ref_image_path", required=True, help="Path to the reference indexed image")
    parser.add_argument("-out", dest="output_path", required=True, help="Path to the output indexed image")
    args = parser.parse_args()

    # Extract the palette from the image
    newimage = index_image_with_ref(image_path = args.image_path, ref_image_path = args.ref_image_path)

    newimage.save(args.output_path, 'PNG')

    print(f"indexed image saved at {args.output_path}")