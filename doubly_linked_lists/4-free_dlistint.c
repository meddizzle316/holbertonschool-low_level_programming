#include "lists.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
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
