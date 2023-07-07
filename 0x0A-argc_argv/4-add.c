#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int j;
	int sum = 0;

	if (argc == 1)
	{

		printf("0\n");
		return (0);
	}
	for (j = 0; argv[j]; j++)
	{
		if (!(argv[j] >= '0' && argv[j] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[j]);
	}

	printf("%d\n", sum);

	return (0);
}
