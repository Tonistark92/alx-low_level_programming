#include "main.h"

/**
 * print_alphabet_x10 - function implementation
 *
 * Description: A function for print alphabets x10
 *
*/


void print_alphabet_x10(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 26; i++)
			putchar('a' + i);
		putchar('\n');
	}
}
