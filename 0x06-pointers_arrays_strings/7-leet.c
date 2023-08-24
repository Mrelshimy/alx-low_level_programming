#include "main.h"

/**
 *leet - encodes string to 1338
 *@str :string
 *
 *Discription Function to encode a string to 1337
 *
 *Return: str
 */

char *leet(char *str)
{
	char new[] = "43071";
	char lett[] = "AEOTL";
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; lett[j]; j++)
		{
			if (str[i] == lett[j] || str[i] == lett[j] + 32)
				str[i] = new[j];
		}
	}

	return (str);
}
