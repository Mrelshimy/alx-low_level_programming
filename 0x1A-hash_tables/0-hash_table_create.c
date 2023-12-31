#include "hash_tables.h"

/**
 * hash_table_create - C prog for creating hash table
 * @size : Table size
 *
 *Return: pointer to created table, or NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int n;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		h_table->array[n] = NULL;
	return (h_table);
}
