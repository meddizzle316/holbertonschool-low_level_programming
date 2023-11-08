#include "lists.h"
/**
 * listint_len - function that returns the amount of nodes/elements in a list
 * @h: starting point of singly linked list
 * Return: amount of nodes/elements in singly linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *current;

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
