#include "lists.h"
/**
 * add_node_end - adds a node at the end of singly linked list
 * @head: address of head of singly linked list
 * @str: string to become data of node added at end
 * Return: pointer to address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	char *copied_string;

	new = NULL;
	current = NULL;
	new = malloc(sizeof(list_t));
	copied_string = (char *)malloc(sizeof(char) * strlen(str) + 1);
	if (copied_string == NULL || new == NULL)
	{
		free(new);
		free(copied_string);
		return(NULL);
	}
	strcpy(copied_string, str);
	new->str = copied_string;
	new->len = strlen(copied_string);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current ->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
