#include "main.h"

/**
 *  _atoi - convert a string to int
 *@s : char to convert
 *
 * Discription : Function to convert string to integer
 * Return: 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int = n;

	do {
		if (*s == '-')
			n = n * -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 20) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (n * sign);
}

