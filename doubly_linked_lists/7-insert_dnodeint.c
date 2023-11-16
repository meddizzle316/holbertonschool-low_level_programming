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
	dlistint_t *temp;
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

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
	for (current = *h, i = 0; current != NULL; i++, current = current->next)
	{
		if (idx == 0)
		{
			new->next = *h;
			*h = new;
			new->next->prev = new;
			return (new);
		}
		else if (i == idx - 1)
		{
			temp = current->next;
			current->next = new;
			new->prev = current;
		}
		else if (i == idx)
		{
			new->next = temp;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
	}
	return (NULL);
}
