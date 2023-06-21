#include "main.h"

/**
 * print_last_digit - function implementation
 *
 * Description: A function for prints last digit
 * @c: input number
 *
 * Return: last digit of number
*/
int print_last_digit(int c)
{
	_putchar('0' + abs(c % 10));
	return (abs(c % 10));
}
