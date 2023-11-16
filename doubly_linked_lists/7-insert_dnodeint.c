#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given (idx) position
 * @h: head of list
 * @idx: index to insert node
 * @n: content of a new node
 * Return: pointer to new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	i = 0;
	current = NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	current = *h;
	while (current != NULL)
	{
		if (idx == 0)
		{
			new->next = *h;
			*h = new;
			new->next->prev = new;
			return (new);
		}
		if (i == idx)
		{
			current->prev->next = new;
			current->prev = new;
			new->prev = current->prev;
			new->next = current;
			return(new);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
