#include "main.h"

/**
 *print_binary - function to print binary representation
 *@n : number
 *
 *Discription: Function to print binary representation
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int j, k = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			putchar('1');
			k++;
		}
		else if (k)
			putchar('0');
	}
		if (!k)
			putchar('0');
}
