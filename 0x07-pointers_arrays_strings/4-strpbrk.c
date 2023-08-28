#include "main.h"

/**
 *_strpbrk - strpbrk function code
 *@s : String to search inside
 *@accept : string of target chars
 *
 *Description : a function to excute strpbrk
 *
 *Return: location of first occurance char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *loc;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				loc = &s[i];
				return (loc);
			}
		}
	}

	return ('\0');
}

