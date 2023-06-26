#include "main.h"

/**
 * swap_int - function implementation
 *
 * Description: A C program to swap two params
 * @a: the number to swap
 * @b: the number to swap
 *
 * Return: void
 *
*/

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = *temp;

}
