#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: linked list
 * @index: the index of the node, starting at 0
 * Return: head node's data, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a variable to keep track of the current node*/
	listint_t *node = head;
	/* Initialize a variable to keep track of the current index*/
	unsigned int cur_index = 0;

	while (node && (cur_index < index))
	{
		node = node->next;
		cur_index++;
	}

	if ((node == NULL) || (cur_index > index))
		return (NULL);

	if (cur_index == index)
		return (node);

	return (NULL);
}
