import argparse
import os
from PIL import Image

def extract_palette(image_path):
    img = Image.open(image_path)

    if img.mode != "P":
        print("Image is not in Palettized mode.")
        return

    palette = img.getpalette()
    rgb_palette = [(palette[i], palette[i + 1], palette[i + 2]) for i in range(0, len(palette), 3)]

    return rgb_palette[:16]

def save_palette_to_file(rgb_palette, output_file):
    with open(output_file, 'w', newline=os.linesep) as f:  # Specify newline='\r\n'
        # Write JASC-PAL header
        f.write("JASC-PAL\r\n0100\r\n16\r\n")

        # Write RGB color values in the range of 0 to 255, separated by spaces
        for color in rgb_palette:
            f.write(f"{color[0]} {color[1]} {color[2]}\r\n")

if __name__ == "__main__":
    # Parse command-line arguments
    parser = argparse.ArgumentParser(description="Extract color palette from an indexed PNG image.")
    parser.add_argument("-in", dest="input_path", required=True, help="Path to the input PNG image")
    parser.add_argument("-out", dest="output_path", required=True, help="Path to the output text file")
    args = parser.parse_args()

    # Extract the palette from the image
    palette = extract_palette(args.input_path)

    if palette:
        # Save the palette to the text file
        save_palette_to_file(palette, args.output_path)
        print(f"Color palette saved to {args.output_path}")
    else:
        print("Failed to extract color palette.")
