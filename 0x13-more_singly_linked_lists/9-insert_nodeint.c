#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: linked list
 * @idx: the index of the node, starting at 0
 * @n: data of the new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new_node;
	unsigned int cur_index = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current && (cur_index < idx - 1))
	{
		current = current->next;
		cur_index++;
	}
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
