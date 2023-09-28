#include "main.h"

/**
 *flip_bits - function to return number of bits to flip number to another
 *@n : number a
 *@m : number b
 *
 *Discription: Function to return number of bits to flip number to another
 *
 *Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	int i = 0, j;

	r = n ^ m;
	for (j = 63; j >= 0; j--)
	{
		if (r & 1)
			i++;
		r = r >> 1;
	}
	return (i);
}
