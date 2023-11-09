#include "lists.h"
/**
 * insert_nodeint_at_index - creates new node of n at index idx in list head
 * @head: head of singly linked list
 * @idx: index of new node
 * @n: value of new node
 * Return:  pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		for (i = 0, current = *head; current != NULL; i++, current = current->next)
		{
			if (idx == 0)
			{
				*head = new;
				new->next = current;
				return (new);
			}
			else if (i == idx - 1)
			{
				temp = current->next;
				current->next = new;
				new->next = temp;
				return (new);
			}
		}
	}
	else if (*head == NULL && idx == 0)
	{
		*head = new;
		return (new);
	}
	return (NULL);
}
