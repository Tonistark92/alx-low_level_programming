#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> 9 with , both in number
 *
 * Return: Always 0 (Success)
*/

{
	int i;

	for (i = 0; i <= 9; i++)
	{

		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
