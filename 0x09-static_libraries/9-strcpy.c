#include "main.h"

/**
 * _strcpy  - copy a string to another
 *@dest : first string
 *@src : second string
 *
 * Discription : Function to a string to another
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}

