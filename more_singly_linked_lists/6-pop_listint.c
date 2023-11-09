#include "lists.h"
/**
 * pop_listint - copy of pop function; deletes first node and returns value
 * @head: head of singly linked list
 * Return: value of node deleted
 */
int pop_listint(listint_t **head)
{
	int result;
	listint_t *temp;

	temp = NULL;
	result = 0;
	if (head != NULL)
	{
		temp = *head;
		result = (*head)->n;
		*head = temp->next;
		free(temp);
	}
	return (result);
}
