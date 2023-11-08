#include "lists.h"
/**
 * add_node - adds a node to the front of a singly linked list
 * @head: double pointer to head of singly linked list
 * @str: string to become value at node
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *copied_string;
	
	new = NULL;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	copied_string = (char *)malloc(sizeof(char) * strlen(str) + 1);
	if (copied_string == NULL)
		return (NULL);
	strcpy(copied_string, str);
	new->str = copied_string;
	new->len = strlen(copied_string);
	new->next = *head;
	*head = new;
	return (new);
}
