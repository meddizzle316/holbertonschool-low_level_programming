#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list to be freed
 * Return: always nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	current = NULL;
	current = head;
	while (current != NULL)
	{
		if (current->str)
		{
			free(current->str);
		}
		current = current->next;
	}
	current = head;
	if (current != NULL)
	{
		free(current->next);
		free(current);
	}
}
