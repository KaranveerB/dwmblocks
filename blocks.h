// To kill (refresh) a block, use "pkill -RTMIN+val" where val is the update signal
// Alternatively, use "kill -val $(pidof dwmblocks)" where val is the update signal + 34

// I find icons more convenient in the script, but the icon can be set here as well
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"statusbar-spacer",	0,			0},
	{"", 		"statusbar-volume",	0,			1},
	{"",		"statusbar-cpu",	1,			0},
	{"",		"statusbar-package",	0,			0},
	{"",		"statusbar-date",	1,			0},
};

//sets delimeter between status commands.
static char* delim = " | ";
