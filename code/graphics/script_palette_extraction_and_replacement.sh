while read LINE; do
    MON=`echo $LINE | cut -d " " -f1`
    #echo "mv ${MON}/normal.pal ${MON}/normal_RSE.pal"
    #mv ${MON}/normal.pal ${MON}/normal_RSE.pal
    #echo "mv ${MON}/shiny.pal ${MON}/shiny_RSE.pal"
    #mv ${MON}/shiny.pal ${MON}/shiny_RSE.pal
    echo "python palette_extractor.py -in ${MON}/front.png -out ${MON}/normal.pal"
    python palette_extractor.py -in ${MON}/front.png -out ${MON}/normal.pal
    echo "python palette_extractor.py -in ${MON}/back.png -out ${MON}/shiny.pal"
    python palette_extractor.py -in ${MON}/back.png -out ${MON}/shiny.pal
done < ~/Projects/FRAMES_FOR_EMERALD/list_151.tsv
