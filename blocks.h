//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/scripts/clock",					60,		12},
	
	{"", "~/scripts/dt",	                60,		0},

	{"", "~/scripts/volume",						0,		10},

	{"", "~/scripts/battery",					60,		0},
    
//	{"", "~/scripts/dt",	                60,		0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
