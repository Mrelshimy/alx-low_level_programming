#include "main.h"

/**
 *_memset - memset function code
 *@s : String to apply
 *@b : value to change to
 *@n : number of bytes
 *
 *Description : a function to excute memset .
 *
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

