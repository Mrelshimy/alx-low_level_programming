#include "hash_tables.h"

/**
  * key_index - C prog to give index of a key
  * @key: key input
  * @size: size of table array
  *
  *Return: index of table
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
