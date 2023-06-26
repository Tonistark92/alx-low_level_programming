#include "main.h"

/**
 * _puts - Implementation function
 *
 * Description: A function to prints string
 * @str: String parameter
 *
 * Return: None
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
