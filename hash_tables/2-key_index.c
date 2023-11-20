#include "hash_tables.h"
/**
 * key_index - gets index of key
 * @key: key to be hashed
 * @size: size of hashtable 
 * Return: index or 0 if fails
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (hash_djb2(key) != 0)
	{
		return (hash_djb2(key) % size);
	}
	return (0);
}
