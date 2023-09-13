#include "function_pointers.h"

/**
 *int_index - search for integer
 *@array: pointer to array of ints
 *@size: array size
 *@cmp: excution function pointer
 *
 *Discription: Function to search for an int
 *
 *Return: Index of the found int - -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
