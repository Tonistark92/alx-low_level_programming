#include "main.h"

/**
 * print_rev - function implementation
 *
 * Description: A C program to swap two params
 * @s: the number to swap
 *
 * Return: void
 *
*/

void print_rev(char *s)

{

	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	while (s[length] >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');

}
