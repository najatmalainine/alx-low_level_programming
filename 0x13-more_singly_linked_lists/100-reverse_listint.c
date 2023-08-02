#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *tmp;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	*head = prev;

	return (*head);
}
