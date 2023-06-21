#include "main.h"
#include <unistd.h>

/**
 * _putchar - Implementation
 *
 * Description: implement for putchar function
 *
 * Return: 1 on Success, -1 on error
*/

void _putchar(char c)
{
	return (write(1, &c, 1));
}
