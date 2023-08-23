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

	if (n % 2 == 0)
		j = n / 2;
	else
		j = (n - 1) / 2;

	for (i; i < j; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
