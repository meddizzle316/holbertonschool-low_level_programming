#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning of dlistint_t
 * @head: double pointer to doubly linked list
 * @n: data of new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	new->next->prev = new;
	return (new);
}
