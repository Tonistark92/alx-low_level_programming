#include <stdio.h>

/**
 * main - Entry point
 *
 * description: A C program for print alphabet in lowercase
 * except e,and q letter using putchar(char i)
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}
