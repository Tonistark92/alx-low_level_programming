#include <stdio.h>

/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> 9  combinations of 2 of 2 numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
