#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list to be freed
 * Return: always nothing
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	current = NULL;
	current = head;

	while (current != NULL)
	{
		temp = current;
		if (current->str)
		{
			free(current->str);
		}
		current = current->next;
		free(temp);
	}
	head = NULL;
}
