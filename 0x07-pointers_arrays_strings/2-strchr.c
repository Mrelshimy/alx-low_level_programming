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
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}

	return ('\0');
}

