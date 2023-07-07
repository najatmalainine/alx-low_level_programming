#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character to check
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
