while read LINE ; do
MON=`echo $LINE | cut -d " " -f1`
MON_NUM=`echo $LINE | cut -d " " -f2`
echo $LINE
echo $MON
echo $MON_NUM
echo "cp 00_FR_DUMP_DONOT_TOUCH/${MON_NUM}.png ${MON}/front.png"
cp 00_FR_DUMP_DONOT_TOUCH/${MON_NUM}.png ${MON}/front.png
echo "cp 00_FR_DUMP_DONOT_TOUCH/${MON_NUM}_2.png ${MON}/back.png"
cp 00_FR_DUMP_DONOT_TOUCH/${MON_NUM}_2.png ${MON}/back.png
echo "cp 01_FR_ANIM_READY_VER1/${MON_NUM}.png ${MON}/anim_front.png"
cp 01_FR_ANIM_READY_VER1/${MON_NUM}.png ${MON}/anim_front.png
done < ~/Projects/FRAMES_FOR_EMERALD/list_151.tsv
