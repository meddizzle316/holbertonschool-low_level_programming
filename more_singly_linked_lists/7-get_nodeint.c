#include "lists.h"
/**
 * get_nodeint_at_index - returns a pointer to a node at a specified index
 * @head: head of singly linked list
 * @index: index indicating which node to return
 * Return: a pointer to a node or struct in a singly linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = NULL;
	i = 0;
	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			if (i == index)
			{
				return (current);
			}
			current = current->next;
			i++;
		}
	}
	return (NULL);
}
