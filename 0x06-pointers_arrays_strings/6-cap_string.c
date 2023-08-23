#include "main.h"

/**
 *cap_string - Capitalize all words of a string
 *@str : string
 *
 *Description : functions to captialize all words of a string
 *
 *Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i ; str[i]; i++)
	{
		if ((str[i] >= 32 && str[i] <= 34) |:wq
				| str[i] == ';')
			str[i+1] -= 32;
	}

	return (str);
}
