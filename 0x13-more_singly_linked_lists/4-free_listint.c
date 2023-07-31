#include "lists.h"

/**
 * free_listint - free linked list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	while (head) /* While there are nodes in the list */
	{
		listint_t *tmp = head; /* Store the current node in a temporary variable */

		head = head->next; /* Move to the next node before freeing the current one */
		free(tmp->n); /* Free the duplicated int in the current node */
		free(tmp); /* Free the current node itself */
	}
}
