#include "main.h"

/**
 *get_bit - function to return value of certain bit
 *@n : number
 *@index: bit index
 *
 *Discription: Function to return bit value of "index"
 *
 *Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
