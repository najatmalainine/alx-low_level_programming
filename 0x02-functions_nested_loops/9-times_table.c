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
		_putchar('0');

		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			z = i * j;

			if (z <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');

		}
		_putchar('\n');
	}

}
