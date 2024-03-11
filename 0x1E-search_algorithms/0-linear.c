#include "search_algos.h"

/**
 * linear_search - search for value within an array
 * @array: pointer to array first element
 * @size: array size
 * @value: value to search for
 * Return: index of found value , -1 if failure
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
