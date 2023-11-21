#include "hash_tables.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp;
	
	if (ht == NULL) return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp (tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
