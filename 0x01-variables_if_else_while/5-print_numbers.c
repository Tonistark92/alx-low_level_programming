#include <stdio.h>

/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> 9
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');

	return (0);
}
