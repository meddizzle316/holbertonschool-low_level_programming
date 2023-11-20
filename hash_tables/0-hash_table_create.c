#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash_table of hash_table_t
 * @size: size of hash_table
 * Return: a pointer to the newly created hash_table or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t) * size);
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
