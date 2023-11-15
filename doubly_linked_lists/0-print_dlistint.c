#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: head of doubly linked list
 * Return: amount of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;

	current = NULL;
	i = 0;
	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
