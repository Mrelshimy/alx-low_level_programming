#include "main.h"
#include <stdlib.h>

/**
  * array_range - C prog to create array of ints from min to max
  * @min : min value
  * @max : max value
  *
  * Discription : Program for creating array of ints from min to max
  *
  *Return: pointer to new memory
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (0);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = i + min;

	return (ptr);

}
