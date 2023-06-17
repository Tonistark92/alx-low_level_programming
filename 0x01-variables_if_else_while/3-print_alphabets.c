#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * description: A C program for print alphabet in lowercase
 * and uppercase using putchar(char i)
 *
 * Return: Always 0 (Success)
*/
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
