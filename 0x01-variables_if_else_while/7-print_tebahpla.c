#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * description: A C program for print alphabet in lowercase
 * using putchar(char i)
 *
 * Return: Always 0 (Success)
*/


{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
