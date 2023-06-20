#include "main.h"

/**
 * print_sign - checks number
 * @n: number to check
 * Return: 1 if greater than 1, 0 if equal 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
