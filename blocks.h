//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/scripts/dwmblocks/clock",					30,		12},
	

	{"", "~/scripts/dwmblocks/volume",						0,		10},

	{"", "~/scripts/dwmblocks/battery",					30,		0},
    
	{"", "~/scripts/dwmblocks/dt",	                60,		0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
