#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;

	listint_t *current = *head;
	listint_t *next_node;

	while (current) /* While there are nodes in the list */
	{

		next_node = current->next;
		free(current); /* Free the current node itself */
		current = next_node;
	}
	*head = NULL;
}
