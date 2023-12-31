#include "lists.h"
/**
 * add_nodeint - adds an int node at the beginning of a singly linked int list
 * @head: head of list to be added
 * @n: value to be added to node
 * Return: pointer to new node/element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
