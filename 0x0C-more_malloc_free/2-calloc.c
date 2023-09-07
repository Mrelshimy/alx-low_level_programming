#include "main.h"
#include <stdlib.h>

/**
  * _calloc - C prog imitated calloc
  * @nmemb : #of blocks
  * @size : size
  *
  * Discription : Program for imitating calloc
  *
  *Return: pointer to new memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);

}
