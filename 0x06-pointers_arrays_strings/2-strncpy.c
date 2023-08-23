#include "main.h"

/**
 *_strncpy - Copy string
 *@src : source string
 *@dest : destination string
 *@n : number of bytes to concatenate
 *
 *Discrption: Function to copy string
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (n > i)
		dest[i] = '\0';

	return (dest);
}

