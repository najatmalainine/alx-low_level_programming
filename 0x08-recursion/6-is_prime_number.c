#include "main.h"

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
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

int is_prime_number(int n)
{
	int i = 2;

	return (_is_prime_helper(n, i));
}
