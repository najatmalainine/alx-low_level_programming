#include "main.h"

/**
 * int_isalpha - checks for lowercase  or uppercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int int_isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c  >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
