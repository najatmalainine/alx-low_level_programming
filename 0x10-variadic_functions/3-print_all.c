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
	printf("%s%c", separator, va_arg(args, char));
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
	const char *str;

	str = va_arg(args, const char*);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (separator != NULL)
	{
		printf("%s", separator);
	}
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator;
	int i, j;

	separator = "";
	i = 0;
	j = 0;

	datatype d[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};


	va_start(args, format);

	while (format[i] != '\0')
	{
		for (j = 0; d[j].specifier != NULL; j++)
		{
			if (format[i] == d[j].specifier[0])
			{
				d[i].print_f(separator, args);
				separator = ", ";
				break;
			}

		}
		i++;

	}
	printf("\n");
	va_end(args);

}
