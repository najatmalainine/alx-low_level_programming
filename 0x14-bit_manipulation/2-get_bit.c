#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);

}
