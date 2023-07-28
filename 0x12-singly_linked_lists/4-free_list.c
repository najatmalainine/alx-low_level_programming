#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	while (head) /* While there are nodes in the list */
	{
		list_t *tmp = head; /* Store the current node in a temporary variable */

		head = head->next; /* Move to the next node before freeing the current one */
		free(tmp->str); /* Free the duplicated string in the current node */
		free(tmp); /* Free the current node itself */
	}
}
