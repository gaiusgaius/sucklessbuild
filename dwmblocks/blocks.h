//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    /*{"Music: ", "cmus-remote -Q | grep 'title' | sed -e 's/.*\///g' -e 's/\.mp3//g'", 1, 0},*/
    {"Vol: ", "amixer -D pulse get Master | grep -i 'Front Left:' | grep -E -o '[0-9]{2}%'",    0,     10},
    {"\x01🗺""",                                                                                0,     0},
	{"\x03Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	                30,	 0},
    {"Free: \x04", "df -h | grep '/dev/nvme0n1p2' | awk '{print $4\"/\"$2}'",                   60,     0},

    {"\x05", "battery_dwmblocks",                                                               60,     0},
	{"\x02", "date '+%b %d (%a) %I:%M%p'",					                                    5,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
