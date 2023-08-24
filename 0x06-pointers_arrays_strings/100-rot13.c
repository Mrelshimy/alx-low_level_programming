#include "main.h"

/**
 *rot13 - encodes string usinr ROT13
 *@str :string
 *
 *Discription Function to encode a string usinr ROT13
 *
 *Return: str
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
		i++;
	}
	return (str);
}
