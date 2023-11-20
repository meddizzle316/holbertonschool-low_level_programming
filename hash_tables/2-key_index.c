#include "hash_tables.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (hash_djb2(key) != 0)
	{
		return (hash_djb2(key) % size);
	}
	return (0);
}
