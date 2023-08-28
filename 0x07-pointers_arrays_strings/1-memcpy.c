#include "main.h"

/**
 *_memcpy - memcpy function code
 *@dest : String to apply
 *@src : string to copy from
 *@n : number of bytes
 *
 *Description : a function to excute memcpy .
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

