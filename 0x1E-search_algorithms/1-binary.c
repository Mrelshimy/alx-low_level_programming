#include "search_algos.h"

/**
 * binary_search - search for value within an array
 * @array: pointer to array first element
 * @size: array size
 * @value: value to search for
 * Return: index of found value, -1 if failure
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		size_t j;

		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
