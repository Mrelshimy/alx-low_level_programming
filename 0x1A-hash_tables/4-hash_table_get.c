#include "hash_tables.h"

/**
 * hash_table_get - Adds an element to the hash table.
 * @ht: The hash table to add/update the key-value pair in.
 * @key: The key.
 *
 * Return: value on success, NULL on failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *hold;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	slot = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[slot];
	while (hold != NULL)
	{
		if (strcmp(hold->key, key) == 0)
			return (hold->value);
		hold = hold->next;
	}
	return (NULL);
}

