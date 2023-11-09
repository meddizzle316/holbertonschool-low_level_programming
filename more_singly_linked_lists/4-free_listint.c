#include "lists.h"
/**
 * free_listint - frees a singly linked list of struct listint
 * @head: head of singly linked list
 * Return: always nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = head;
	temp = NULL;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
