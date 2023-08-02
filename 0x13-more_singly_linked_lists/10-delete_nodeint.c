#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nth node of a listint_t linked list
 * @head: linked list
 * @index: the index of the node, starting at 0
 * Return: address of new node, or NULL if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int cur_index = 0;


	if (!(*head) || !head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current && (cur_index < index))
	{
		previous = current;
		current = current->next;
		cur_index++;
	}

	if (!current)
		return (-1);

	previous->next = current->next;

	free(current);

	return (1);
}
