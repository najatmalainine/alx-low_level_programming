#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL && i != n - 1)
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(args);
}
