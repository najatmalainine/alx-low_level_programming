#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{

	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
