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
	if (argc != 3)
		
		printf("Error\n");
		return (1);

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
