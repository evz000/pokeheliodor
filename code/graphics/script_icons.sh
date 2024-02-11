#!/bin/bash

while read LINE; do
  NUM=`echo $LINE | cut -d " " -f1`
  MON=`echo $LINE | cut -d " " -f2`
  echo "mv ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon.png ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon_orig.png"
  mv ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon.png ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon_orig.png
  echo "cp ~/Downloads/sprite6464_icons/all_1_to_3/${NUM}.png ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon.png"
  cp ~/Downloads/sprite6464_icons/all_1_to_3/${NUM}.png ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon_new.png
  echo "touch ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon_new.png"
  touch ~/Projects/pokeheliodor/graphics/pokemon/${MON}/icon_new.png
done < ~/Projects/FRAMES_FOR_EMERALD/list_386_num_.tsv
