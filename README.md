# MMC3_512K-PRG_256K-CHR_SRAM_4-SCREENS

 MMC3 stuff for CC65. 512 KB of PRG-ROM, 256 KB of CHR-ROM, 8K of SRAM, 4 Screens.

 This is adapted from Nesdoug's tutorials.
 Changes include:
    512 KB of PRG-ROM (instead of 128 KB)
    256 KB of CHR-ROM (instead of 128 KB)
    8 KB of SRAM (instead of WRAM)
    4 Screens (Does this just add VRAM on the cartridge?)
    The CODE section is from $c000 - $dfff (instead of $a000 - $dfff; default code still fits, and this allows you to swap the bank at $a000 without breaking things)
