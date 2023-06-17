#include <stdio.h>
int main(void)

/**
 * main - Entry point
 *
 * description: A C program for print alphabet in lowercase
 * except e,and q letter using putchar(char i)
 *
 * Return: Always 0 (Success)
*/
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
