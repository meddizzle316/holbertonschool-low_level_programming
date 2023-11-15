#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list
 * @head: head of list
 * Return: sum of data of list or 0 if fail
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total;

	current = NULL;
	total = 0;
	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
