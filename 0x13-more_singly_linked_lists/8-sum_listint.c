#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: linked list
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	/* Initialize a variable to keep track of the current node*/
	listint_t *current = head;
	/* Initialize a variable to store the sum*/
	unsigned int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
