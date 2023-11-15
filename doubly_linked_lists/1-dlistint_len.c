#include "lists.h"
/**
 * dlistint_len - returns # of elements in linked dlistint_t list
 * @h: head of list;
 * Return: number of elements/nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;
	if (h == NULL)
		return (0);
	current = NULL;
	i = 0;
	current = h;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
