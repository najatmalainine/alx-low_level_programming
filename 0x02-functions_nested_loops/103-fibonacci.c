#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of the eve-valued
 *		Fibonacci sequence not exceeding
 *		4 million
 *
 * Return: 0
 */

int main(void)
{
	float total_sum;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);


	return (0);
}
