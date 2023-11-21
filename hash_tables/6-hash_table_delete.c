#include "hash_tables.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *tmp;
	hash_node_t *current;

	i = 0;
	if (ht != NULL)
	{
		for ( ; i < ht->size; i++)
		{
			if (ht->array[i] != 0)
			{
				current = ht->array[i];
				while (current != NULL)
				{
					tmp = current->next;
					free(current->key);
					free(current->value);
					free(current);
					current = tmp;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
