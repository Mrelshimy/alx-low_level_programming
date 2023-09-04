#include "main.h"
#include <stdlib.h>

/**
  * _strdup - C prog for returning pointer to memory with string as par.
  * @str : string to be printed
  *
  * Discription : Program for allocating mem for string input
  *
  *Return: pointer to new memory (Success) , 0 Fail
  */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = (char *) malloc(size + 1);

	if (size == 0 || ptr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
