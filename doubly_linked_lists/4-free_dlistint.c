#include "lists.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free(head);
	}
}
