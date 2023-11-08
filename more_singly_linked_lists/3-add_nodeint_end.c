#include "lists.h"
/**
 * add_nodeint_end - addes an int node to the end of a singly linked list
 * @head: head of list
 * @n: value to become new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
