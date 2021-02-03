//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "volume",     5,                  10 },
	{"",      "memory",		  30,									4 },
	{"",      "internet",   5,                  1 },
	{"",      "battery",    10,                 2 },
	{"",      "clock",      5,                  3 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
