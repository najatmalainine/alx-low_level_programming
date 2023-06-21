#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = i * j;
			printf("%d", z);
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}

		}
		_putchar('\n');
	}

}
