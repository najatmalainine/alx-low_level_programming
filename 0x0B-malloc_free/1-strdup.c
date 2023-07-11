#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	int len = 0;

	while (str[i] != '0')
	{
		len++;
		i++;
	}

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			dup[i] = str[i];
		}
	dup[len] = '\0';
	}


	return (dup);
}
