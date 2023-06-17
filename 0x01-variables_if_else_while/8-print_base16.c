#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * description: A C program for print numbers
 * from 0 -> f hexdecimal
 *
 * Return: Always 0 (Success)
*/

{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
