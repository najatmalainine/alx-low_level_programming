#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int i, j;
	char *concat;
	int current_position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}

	concat = malloc((len + ac) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[current_position] = av[i][j];
			current_position++;
		}

		concat[current_position] = '\n';
		current_position++;
	}
	concat[current_position] = '\0';
	return (concat);
}
