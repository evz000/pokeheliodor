#!/bin/bash

for i in ~/Projects/pokeheliodor/graphics/pokemon/* ; do
    echo "cp ${i}/icon.png ${i}/icon_orig.png"
    cp ${i}/icon.png ${i}/icon_orig.png
    [ -f $i/icon_new.png ] || continue
    echo "python ~/Projects/pokeheliodor/code/graphics/index_image_with_ref.py -in ${i}/icon_new.png -ref ${i}/icon_orig.png -out ${i}/icon_new_idx.png"
    python ~/Projects/pokeheliodor/code/graphics/index_image_with_ref.py -in ${i}/icon_new.png -ref ${i}/icon_orig.png -out ${i}/icon_new_idx.png
    echo "mv ${i}/icon_new_idx.png ${i}/icon.png"
    mv ${i}/icon_new_idx.png ${i}/icon.png
done