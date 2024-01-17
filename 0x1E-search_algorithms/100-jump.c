#include "search_algos.h"

/**
  * jump_search - Searches for a value in an array
  *                 of integers using Jump search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	end = 0;

	printf("Value checked array[%lu] = [%d]\n", end, array[end]);

	while (end < size && array[end] < value)
	{
		start = end;
		end += jump;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i < size && i < end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
