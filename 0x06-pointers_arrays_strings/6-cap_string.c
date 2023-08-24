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
	char deli[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		int j = 0;

		while (j < 16)
		{
			if (str[i] == deli[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					break;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
