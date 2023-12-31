#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		(*head) = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
