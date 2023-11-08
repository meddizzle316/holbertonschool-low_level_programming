#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: singly linked list to be printed
 * Return: amount of nodes/elements
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *current;

	current = NULL;
	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else 
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
	}
	return (i);
}
