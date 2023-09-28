#include "main.h"

/**
 *set_bit - function to set value of certain bit
 *@n : number
 *@index: bit index
 *
 *Discription: Function to set bit value to 1 of "index"
 *
 *Return: 1 worked , 0 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = *n >> index;
	m = m | 1;
	m = m << index;
	*n = m | *n;
		return (1);
}
