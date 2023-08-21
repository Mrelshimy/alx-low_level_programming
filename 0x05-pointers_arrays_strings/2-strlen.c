#include "main.h"

/**
 * _strlen - String length function
 *@s : String
 *
 * Discription : Function to return string length
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

