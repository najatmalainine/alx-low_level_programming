#include "main.h"

/**
 * _abs - checks number
 * @int: number to check
 * Return: n if positive, -n if negative, 0 otherwise
 */

int _abs(int n)
{


	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
