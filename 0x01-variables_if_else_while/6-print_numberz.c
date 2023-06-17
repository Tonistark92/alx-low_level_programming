#include <stdio.h>

/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> 9 using putchar(char i)
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
