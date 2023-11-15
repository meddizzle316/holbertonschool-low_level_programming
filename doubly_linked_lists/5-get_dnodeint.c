#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of list
 * @index: nth node to be returned
 * Return: return pointer if it exists, NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = NULL;
	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
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
	return (NULL);
}
