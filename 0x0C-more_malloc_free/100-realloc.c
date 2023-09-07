#include "main.h"
#include <stdlib.h>

/**
  * _realloc - C prog to imitate realloc
  * @ptr : pointer to memory
  * @old_size : old memory size
  * @new_size : new memory size
  *
  * Discription : Program for imitation realloc
  *
  *Return: pointer to new memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	optr = ptr;

	nptr = malloc(new_size);
	if (nptr == 0)
		return (0);
	if (ptr == 0)
		return (nptr);

	for (i = 0; i < old_size; i++)
		nptr[i] = optr[i];

	free(ptr);
	return (nptr);
}
