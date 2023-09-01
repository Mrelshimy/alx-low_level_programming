#include "main.h"

/**
 *_strspn - strspn function code
 *@s : String to search inside
 *@accept : string to search for
 *
 *Description : a function to excute strspn
 *
 *Return: number of bytes consisting only of accept chars
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return ('\0');
}

