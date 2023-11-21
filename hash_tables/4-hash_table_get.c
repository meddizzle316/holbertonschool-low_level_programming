#include "hash_tables.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	
	index = key_index((unsigned const char *)key, ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
