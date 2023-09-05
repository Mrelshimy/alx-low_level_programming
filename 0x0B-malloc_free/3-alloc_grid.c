#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - C prog to return ptr to 2d array
  * @height : height
  * @width : width
  *
  * Discription : Program for return pointer to 2d array
  *
  *Return: pointer to new memory (Success) , 0 Fail
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (0);

	ptr = malloc(height * sizeof(*ptr));

	if (ptr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));

		if (ptr[i] == 0)
		{
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (0);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
