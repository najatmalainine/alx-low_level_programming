#include "main.h"

/**
 * times_table - prints the n times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j, z;

	if (n <= 15 && n >= 0)
	{

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			z = i * j;

			if (z <= 9)
				_putchar(' ');
			if (z <= 99)
				_putchar(' ');
			if (z >= 100)
			{
				_putchar((z / 100) + '0');
				_putchar((z / 10) % 10 + '0');
			}
			else if (z <= 99 && z >= 10)

				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');

		}
		_putchar('\n');
	}

	}
}
