#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
		last_dig = -1 * (n % 10);
	else
		last_dig = n % 10;

	_putchar(last_dig + '0');

	return (last_dig);
}
