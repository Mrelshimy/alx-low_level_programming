#include "main.h"

/**
 * swap_int - Set int value to 98
 *@a : first int
 *@b : second int
 *
 * Discription : Function to swap 2 ints values using pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

