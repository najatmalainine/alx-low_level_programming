#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: number to check
 * Return:0
 */

void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
}
