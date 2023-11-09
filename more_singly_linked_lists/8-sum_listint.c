#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of linked list
 * @head: head of singly linked list
 * Return: sum of all nodes/data (n) in list
 */
int sum_listint(listint_t *head)
{
	int result;
	listint_t *current;

	current = NULL;
	result = 0;
	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			result += current->n;
			current = current->next;
		}
	}
	return (result);
}
