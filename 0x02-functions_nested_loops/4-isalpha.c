#include "main.h"

/**
 * _isalpha - function implementation
 *
 * Description: A function for check if character
 * is alphabet (1) or not (0)
 * @c: character input
 *
 * Return: 1 if alphabet, 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
