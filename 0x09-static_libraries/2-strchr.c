#include "main.h"

/**
 *_strchr - strchr function code
 *@s : String to search inside
 *@c : char to find
 *
 *Description : a function to excute strchr .
 *
 *Return: pointer to byte of found char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}

	return ('\0');
}

