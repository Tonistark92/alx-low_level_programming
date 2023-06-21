#include "main.h"

/**
 * _islower - function implementation
 *
 * Description: A function for check if character
 * is lowercase (1) or not (0)
 * @c: character input
 *
 * Return: 1 if lower, 0 otherwise
*/

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
