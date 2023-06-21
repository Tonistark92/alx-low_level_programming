#include "main.h"

/**
 * print_to_98 - function implementation
 *
 * Description: A function for printing from n to 98
 * where is unordered or ordered
 * @n: Starter number
*/


void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
