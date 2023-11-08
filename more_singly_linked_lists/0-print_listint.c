#include "lists.h"
/**
 * print_listint - prints a singly linked list of ints
 * @h: head of singly linked list to be printed
 * Return: amount of elements/nodes in list
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *current;

	current = NULL;
	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		printf("[%d]\n", current->n);
		current = current->next;
	}
	return (i);
}
