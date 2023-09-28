#include "main.h"

/**
 *binary_to_uint - function to convert binary to insugned int
 *@b : pointer to string of binary data
 *
 *Discription: Function convert binary to unsigned int
 *
 *Return: converted number or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j, i = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] ; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);

		i = 2 * i + (b[j] - '0');
	}
	return (i);
}
