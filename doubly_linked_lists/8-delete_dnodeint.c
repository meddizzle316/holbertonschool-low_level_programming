#include "lists.h"
/**
 * free_null -- frees and nulls a pointer to a list
 * @ptr: pointer to be freed and nulled
 * Return: nothing
 */

void free_null (dlistint_t **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
/**
 * delete_dnodeint_at_index - deletes the node at index 
 * @head: head of list
 * @index: index to delete node
 * Return: 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int i;

	if (*head != NULL)
	{
		for (i = 0, current = *head; current != NULL; current = current->next)
		{
			if (index == 0)
			{
				*head = (*head)->next;
				free_null(&current);
				return (1);
			}
			else if (i == index - 1)
			{
				temp = current;
			}
			else if (i == index)
			{
				temp->next = current->next;
				current->prev->prev = temp->prev;
				current->next->prev = temp;
				free_null(&current);
				return (1);
			}
			i++;
		}
	}
	return (-1);
}
