#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9).
* Return:  0 if not digit or 1 if digit
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
