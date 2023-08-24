#include "main.h"

/**
 *reverse_array - Reverse array
 *@a : array
 *@n : string array length
 *
 *Discrption: Function to revrse array if ints
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
