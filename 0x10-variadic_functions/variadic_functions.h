#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - struct
 * @specifier: letter signifying data type
 * @func: function ptr
 */
typedef struct dt
{
	char specifier;
	void (*func)(char *, va_list);
} datatype;

#endif
