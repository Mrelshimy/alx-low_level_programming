#include "main.h"

/**
 *_strcmp - Compare 2 strings
 *@s1 : string 1
 *@s2 : string 2
 *
 *Discrption: Function compare 2 strings
 *
 *Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			j = ((int)s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
		i++;
	}

	return (j);
}

