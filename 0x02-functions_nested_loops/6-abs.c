#include "main.h"

/**
 * _abs - function implementation
 *
 * Description: A function for convert negative values to positive values
 * except 0 as its not postive or negative
 * @c: input number
 *
 * Return: 1 if alphabet, 0 otherwise
*/
int _abs(int c)
{
	return (c > 0 ? c : -c);
}
