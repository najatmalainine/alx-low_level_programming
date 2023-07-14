#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);

		free(ptr); /* free old ptr */

	}
	return (new_ptr);
}
