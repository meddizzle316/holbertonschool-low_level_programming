#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list to be freed
 * Return: always nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
