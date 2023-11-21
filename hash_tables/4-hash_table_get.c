#include "hash_tables.h"
/**
 * hash_table_get - gets a value at an index in a hash_table_t
 * @ht: pointer to hash_table_t
 * @key: pointer to key to compare
 * Return: pointer to value at index of key or NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
