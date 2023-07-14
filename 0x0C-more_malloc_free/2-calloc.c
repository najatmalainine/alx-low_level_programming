#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	void *ptr;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0; /* type cast assigning values*/
	}

	return (ptr);
}
