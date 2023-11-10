#include "lists.h"
void free_null(listint_t **ptr);
/**
 * delete_nodeint_at_index - deletes int node at index
 * @head: head of list
 * @index: index to delete node
 * Return: 1 if successful, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		temp = NULL;
		return (-1);
	}
	if (*head != NULL)
	{
		for (i = 0, current = *head; current != NULL; i++, current = current->next)
		{
			if (index == 0)
			{
				*head = (*head)->next;
				free_null(&current);
				free_null(&temp);
				return (1);
			}
			else if (i == index - 1)
			{
				temp = current;
			}
			else if (i == index)
			{
				temp->next = current->next;
				free_null(&current);
				free_null(&temp);
				return (1);
			}
		}
	}
	free_null(&temp);
	return (-1);
}

/**
 * free_null -- frees a node and sets it to zero; space saver
 * @ptr: double pointer to listint_t to be freed
 * Return: Always void
 */
void free_null(listint_t **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
