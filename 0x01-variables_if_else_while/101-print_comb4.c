#include <stdio.h>
int main(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (z = j + 1; z <= 9; z++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + z);

				if (i != 7 || j != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
