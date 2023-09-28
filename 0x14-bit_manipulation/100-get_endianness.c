#include "main.h"

/**
 *get_endianness - function to check machine endianness
 *
 *Discription: Function to check machine endianness
 *
 *Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	unsigned int *ptr = &n;

	return (*ptr);
}
