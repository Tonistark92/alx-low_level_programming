#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to be checked
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    if (isdigit(c))
        return 1;
    else
        return 0;
}
