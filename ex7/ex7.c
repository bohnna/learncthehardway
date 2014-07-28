#include <stdio.h>

int main(int argc, char *argv[])
{

	int bugs = 100;
	float bugs_rate = 1.2;
	printf("You have %d bugs at an imaginary rate of %f.\n", bugs, bugs_rate);
	
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", universe_of_defects);

	double expected_bugs = bugs * bugs_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("This is only a %e portion of the universe.\n", part_of_universe);

	// this makes no sense. just a demo of someting weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);

	return 0;
}
