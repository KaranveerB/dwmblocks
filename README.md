# dwmblocks
Modular status bar for dwm written in c.

# fork additions
Allow delimiter to be multiple characters long.

# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.

# update block
To update a block, use `kill -val $(pidof dwmblocks)` where val is the update signal + 34 or `pkill -RTMIN+val` where val is the update signal. Multiple commands can use the same update signal
