#include "main.h"

/**
 *_strcat - Concatenate 2 strings
 *@src : source string
 *@dest : destination string
 *
 *Discrption: Function to concatenate 2 strings
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	j += i;

	while (i < j)
	{
		dest[i] = src[n];
		n++;
		i++;
	}


	return (dest);
}

