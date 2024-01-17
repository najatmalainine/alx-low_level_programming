#include "search_algos.h"

/**
  * binary_search - Searches for a value in an array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: must print the array being searched every time it changes.
  * (e.g. at the beginning and when you search a subarray).
  */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;



	while (l <= r)
	{
		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		mid = (l + r) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
