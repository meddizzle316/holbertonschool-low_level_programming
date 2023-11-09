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

	current = NULL;
	temp = NULL;
	i = 0;
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
		current = *head;
		while (current != NULL)
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
			}
			else if (i == idx)
			{
				new->next = temp;
				return (new);
			}
			i++;
			current = current->next;
		}
	}
	return (NULL);
}
