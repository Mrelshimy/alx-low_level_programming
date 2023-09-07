#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - C prog to allocate memory
  * @b : memory size
  *
  * Discription : Program for allocating dynamic memory using malloc
  *
  *Return: pointer to new memory
  */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
