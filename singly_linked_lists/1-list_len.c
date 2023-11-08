#include "lists.h"
/**
 * list_len - returns the number of elements in a singly linked list
 * @h: a given singly linked list
 * Return: number of elements/nodes in singly linked list
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *current;

	current = NULL;
	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
