#include "hash_tables.h"

/**
 * create_node - creates hash node.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: pointer to node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *nnode;

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (NULL);

	nnode->key = strdup(key);
	if (nnode->key == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->value = strdup(value);
	if (nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode);
		return (NULL);
	}
	nnode->next = NULL;
	return (nnode);
}


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
	hash_node_t *new_node, *hold;
	unsigned long int slot;
	char *nvalue;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[slot];
	while (hold != NULL)
	{
		if (strcmp(hold->key, key) == 0)
		{
			nvalue = strdup(value);
			if (nvalue == NULL)
				return (0);
			free(hold->value);
			hold->value = nvalue;
			return (1);
		}
		hold = hold->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[slot];
	ht->array[slot] = new_node;
	return (1);
}

