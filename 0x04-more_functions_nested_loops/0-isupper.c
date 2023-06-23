#include "main.h"

/**
 * _isUpper - function implementation
 *
 * Description: A function to check if the char is upper or not
 * returns a 0 if is lowwer and 1 if upper
*/

int _isupper(int c)
{
    if (isupper(c))
        return 1;
    else
        return 0;
}
