#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key-value pair in.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_nnode, *current;
	unsigned long int hash;

	if (ht == NULL || key == NULL)
		return (0);

	hash_nnode = malloc(sizeof(hash_node_t));
	if (hash_nnode == NULL)
		return (0);

	hash_nnode->key = strdup(key);
	if (hash_nnode->key == NULL)
	{
		free(hash_nnode);
		return (0);
	}

	hash_nnode->value = strdup(value);
	if (hash_nnode->value == NULL)
	{
		free(hash_nnode->key);
		free(hash_nnode);
		return (0);
	}

	hash = hash_djb2((unsigned char *)key);
	if (ht->array[hash] == NULL)
	{
		hash_nnode->next = NULL;
		ht->array[hash] = hash_nnode;
		return (1);
	}

	current = ht->array[hash];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				free(hash_nnode->key);
				free(hash_nnode->value);
				free(hash_nnode);
				return (0);
			}
			return (1);
		}

		if (current->next == NULL)
			break;

		current = current->next;
	}

	hash_nnode->next = ht->array[hash];
	ht->array[hash] = hash_nnode;

	return (1);
}

