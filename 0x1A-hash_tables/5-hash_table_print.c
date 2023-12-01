#include "hash_tables.h"

/**
 * hash_table_print - prints hash table.
 * @ht: The hash table to add/update the key-value pair in.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hold;
	unsigned long int n;
	int no_comma = 0;

	if (ht == NULL || ht->array == NULL)
		printf("{}\n");

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		hold = ht->array[n];
		while (hold != NULL)
		{
			if (no_comma == 1)
				printf(", ");
			printf("'%s': '%s'", hold->key, hold->value);
			hold = hold->next;
			no_comma = 1;
		}
	}
	printf("}\n");
}

