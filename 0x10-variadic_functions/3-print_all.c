#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @args: argument pointer
 * @separator: the string separator
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints int
 * @args: argument pointer
 * @separator: the string separator
 */

void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: argument pointer
 * @separator: the string separator
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - prints string
 * @args: argument pointer
 * @separator: the string separator
 */

void print_str(char *separator, va_list args)
{
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	else
		printf("%s%s", separator, str);

}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i, j;

	datatype d[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	separator = "";
	i = 0;
	j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		while (d[j].specifier)
		{
			if (format[i] == d[j].specifier[0])
			{
				d[i].print_func(separator, args);
				separator = ", ";
			}
			j++;

		}
		i++;

	}
	printf("\n");
	va_end(args);

}
