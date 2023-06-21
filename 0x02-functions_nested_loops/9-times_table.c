#include "main.h"

/**
 * times_table - function implementation
 *
 * Description: A function for 2d table
 * x9 times
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			if (i * j <= 9)
				_putchar(' ');
			else
				_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
		}
		_putchar('\n');
	}
}
