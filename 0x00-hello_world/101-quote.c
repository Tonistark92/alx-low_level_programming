#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program for prints something without using
 *  common print functions in c
 *
 * Return: Always 1 (success)
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
