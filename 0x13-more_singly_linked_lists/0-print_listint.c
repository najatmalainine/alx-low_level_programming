#include "lists.h"

/**
 * print_listint - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		count += 1;
		current = current->next;
	}

	return (count);
}
