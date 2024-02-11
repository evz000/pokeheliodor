
## Custom sprites
### FRLG sprites (with animations) for Kanto Pokemon

Instructions for swapping the vanilla Emerald sprites of the kanto mons for the FRLG sprites:
1. stub out the function(s) at src/decompress.c#L449 : stub out gMonFrontPicTableFRLG , gMonFrontPicTableDP, or rather their contents. e.g.:
     ```C
     static void SwapSprite(u16 species, u32 pid, void *dest)
     {
     }
     ```
2. These contain pointers to alternate sprites, so if I'm going to swap graphics/pokemon as a whole, they'll all be broken. If I just do a drag-and-drop overwrite keeping the extra sprites there and just stub the function, it should work fine
3. Clean clone
4. Merge/overwrite the contents of graphics/pokemon using mine.
5. make mostlyclean; make

### Fix the following mons:
 - Seaking (missing the second frame) DONE
 - Poliwag
 - Poliwhirl
 - ((I know there are more; check the pokedex))


### Other custom sprites different from Vanilla Emerald
 - Scyther (merged the FRLG with the RSE one. Needs a bit of polishing)
 - Pikachu (swapped frame 2 for frame 1)
 - Lugia (adapted from the DS-Styled 64x64 resource and added a second frame)
 - Recolored Latios
 - Tropius backsprite
 - Salamence backsprite

## Sprites I'm considering changing
 - Smeargle: Looks a bit weird. Adjust the colours a bit maybe. Plus, maybe replace for the the HG/SS one?
 - Furret: Revamp of the GSC front sprite and/or_just change the backsprite for the backsprite in HG/SS
 - Regis look tiny in the sprites
 - Fix milotic's eyes

## Custom party/PC icons
Adapted and (automatically) indexed from the DS-Styled 64x64 sprites resource. These correspond with Gen6/7 icons. They are more polished thant the Gen3 ones and are not too different from Gen3's art direction.

### Manually fixed icons after auto-indexing (they share palettes, check the ones sharing the same palettes as the faulty ones):
 - Grovyle DONE
 - Torkoal DONE
 - Cradily DONE
 - Iglybuf DONE
 - Bagon DONE
 - Xatu DONE
 - Aerodactyl DONE
 - Hariyama DONE
 - Nidorina DONE
 - Totodile DONE
 - Croconaw DONE
 - Feraligatr DONE
 - Krabby DONE
 - Kingler DONE
 - Lickitung DONE
 - Pichu DONE
 - Whismur DONE
 - Miltank DONE
 - Articuno DONE
 - Gligar DONE
 - Latios DONE
 - Blissey DONE