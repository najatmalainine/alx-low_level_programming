#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - when user runs main,
 * user should give two integers and an operator and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_f)(int, int);


	/* validate input */
	if (argc != 4)
		printf("Error\n"), exit(98);


	/* convert user input to ints and point to correct operator function */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_f = get_op_func(argv[2]);

	if (!op_f)
		printf("Error\n"), exit(99);


	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);


	printf("%d\n", op_f(a, b)); /* calculate via function ptr */

	return (0);
}
