#include "main.h"

/**
 * _is_prime_helper - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @i: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int _is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n - 1)
		return (1);
	return (_is_prime_helper(n, i + 1));
}


/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	return (_is_prime_helper(n, i));
}
