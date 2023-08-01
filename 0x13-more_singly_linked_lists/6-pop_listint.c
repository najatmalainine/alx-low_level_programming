#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 * Return: head node's data, or NULL if failed
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!(*head))
		return (0);
	tmp = *head;

	*head = (*head)->next;

	data = tmp->n;

	free(tmp);

	return (data);


}
