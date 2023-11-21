#include "hash_tables.h"
/**
 * hash_table_print - prints out a hash table of hash_table_t
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int n;

	n = 0;
	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != 0)
			{
				hash_node_t *tmp = ht->array[i];
				
				while (tmp != NULL)
				{
					if (n)
						printf(", ");
					if (tmp != NULL)
						printf("'%s': ", tmp->key);
					printf("'%s'", tmp->value);
					tmp = tmp->next;
					n = 1;
				}
			}
		}
		printf("}\n");
	}
}
