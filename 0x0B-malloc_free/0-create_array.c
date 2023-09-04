#include "main.h"
#include <stdlib.h>

/**
  * create_array - C prog for create array of chars using malloc
  * @c : character to be printed
  * @size : memory size
  *
  * Discription : Program for printing array of chars using malloc
  *
  *Return: pointer to array (Success) , 0 Fail
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char*) malloc(size * (sizeof(char)));

	for (i = 0; i < size; i++)
	{
		*ptr = c;
		ptr = ptr + 1;
	}

	return (ptr);
	free(ptr);
}
