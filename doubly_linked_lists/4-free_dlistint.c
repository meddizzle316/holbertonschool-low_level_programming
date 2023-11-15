#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 * Return: always void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current;

	if (head)
	{
		current = head;
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}
}
