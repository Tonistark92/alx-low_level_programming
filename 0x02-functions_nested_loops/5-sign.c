#include "main.h"

/**
 * print_sign - function implementation
 *
 * Description: A function for check if number prints 0
 * if is zero or prints - if less than zero
 * prints + if more than zero
 * @n: input number
 *
 * Return: 1 if more than, 0 if its 0, -1 if less than -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
