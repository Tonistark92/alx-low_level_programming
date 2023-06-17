#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> 9  combinations of 2 numbers
 *
 * Return: Always 0 (Success)
*/
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
