#include "lists.h"
/**
 * free_listint2 - frees a singly linked list of int struct
 * @head: double pointer to list
 * Return: always void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	current = *head;
	temp = NULL;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
