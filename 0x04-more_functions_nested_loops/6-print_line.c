#include "main.h"

/**
 * print_line - prints '_' n times
 * @n: number to check
 * Return: 0
 */

void print_line(int n)
{
	int j;


	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{

			_putchar('_');

		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
