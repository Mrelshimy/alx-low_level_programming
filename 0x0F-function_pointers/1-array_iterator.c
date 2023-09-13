#include "function_pointers.h"

/**
 *array_iterator - excute array of functions
 *@array: pointer to fnx array
 *@size: array size
 *@action: excution function pointer
 *
 *Discription: Function to print a given name
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && size != 0 && action != 0)
	{
		size_t i = 0;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
