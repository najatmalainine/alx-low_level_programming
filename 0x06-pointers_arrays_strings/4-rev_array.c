#include "main.h"


/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	/* Swap elements at start and end positions*/

	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	/* Move start and end pointers towards the center*/
	start++;
	end--;
	}
}
