#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: The hash table to add/update the key-value pair in.
 *
 */
void hash_table_delete(const hash_table_t *ht)
{
	hash_node_t *hold;
	unsigned long int n;

	if (ht == NULL || ht->array == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		hold = ht->array[n];
		while (hold != NULL)
		{
			free(hold->key);
			free(hold->value);
			hold = hold->next;
		}
		free(hold->array[n]);
	}
	free(ht->array);
	free(ht);
}

