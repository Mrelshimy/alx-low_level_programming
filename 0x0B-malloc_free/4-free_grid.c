#include "main.h"
#include <stdlib.h>

/**
  * free_grid - C prog to free file 3 memory
  * @grid : pointer to grid
  * @height : height
  *
  * Discription : Program for free file 3 mem
  *
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
