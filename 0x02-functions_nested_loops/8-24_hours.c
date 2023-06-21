#include "main.h"

/**
 * jack_bauer - function implementation
 *
 * Description: A function for printing time
 * from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
			printf("%02d:%02d\n", h, m);
}
