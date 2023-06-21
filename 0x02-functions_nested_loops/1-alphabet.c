#include "main.h"

/**
 * print_alphabet - function implementation
 *
 * Description: A function for print alphabets
 *
*/

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);
	putchar('\n');
}
