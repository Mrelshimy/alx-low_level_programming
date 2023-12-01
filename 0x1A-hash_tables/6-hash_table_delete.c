#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: The hash table to add/update the key-value pair in.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hold;
	unsigned long int n;

	if (ht == NULL || ht->array == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		while (ht->array[n] != NULL)
		{
			hold = ht->array[n]->next;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = hold;
		}
	}
	free(ht->array);
	free(ht);
}

