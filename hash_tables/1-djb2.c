#include "hash_tables.h"
/**
 * hash_djb2 - a hash function; designed by daniel julius bernstein
 * @str: a string to be basis for random int number output
 * Return: random int output based on str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
