#include "main.h"

/**
 *_strncat - Concatenate 2 strings
 *@src : source string
 *@dest : destination string
 *@n : number of bytes to concatenate
 *
 *Discrption: Function to concatenate n bytes of string to another
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	if (n > j)
		j += i;
	else
		j = i + n;

	while (i < j)
	{
		dest[i] = src[k];
		k++;
		i++;
	}


	return (dest);
}

