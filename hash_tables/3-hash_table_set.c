#include "hash_tables.h"
#include <string.h>
/**
 * strdup - copied strdup function because compiler isn't recognizing it
 * @s: string to be copied
 * Return: a pointer to a copied string
 */
char* strdup (const char *s)
{
	size_t slen;
	char *result;

	slen = strlen(s);
	result = malloc(slen + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s, slen+1);
	return (result);
}
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new;
	char *copied_key;
	char *copied_value;

	copied_key = strdup(key);
	copied_value = strdup(value);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL || copied_value == NULL || copied_key == NULL)
	{
		free(copied_value);
		free(copied_key);
		free(new);
		return (0);
	}
	new->key = copied_key;
	new->value = copied_value;
	if (ht == NULL)
		return (0);
	index = key_index((unsigned const char *)copied_key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
