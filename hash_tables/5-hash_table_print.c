#include "hash_tables.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, n;

	n = 0;
	printf("{");
	if (ht != NULL)
	{
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
