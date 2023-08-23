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
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;

	if (n > j)
	{
		n = j;
		dest[n] = '\0';
	}

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}

