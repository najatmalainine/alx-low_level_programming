#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;
	listint_t *current;

	if (!head)
		return;

	current = *head;


	while (current) /* While there are nodes in the list */
	{

		next_node = current->next;
		free(current); /* Free the current node itself */
		current = next_node;
	}
	*head = NULL;
}
