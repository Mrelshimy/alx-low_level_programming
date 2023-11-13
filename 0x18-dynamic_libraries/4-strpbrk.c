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
	int i = 0;
	char *loc;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				loc = &s[i];
				return (loc);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}

