#include "hash_tables.h"

/**
  * hash_djb2 - C prog to implement djb2 algorithm
  * @str: key input
  *
  *Return: index to stor key inside the table
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
