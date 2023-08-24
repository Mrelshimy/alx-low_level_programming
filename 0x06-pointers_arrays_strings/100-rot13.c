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
	int j = 0;
	char old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[j])
	{
		int i = 0;

		while (i < 52)
		{
			if (str[j] == old[i])
			{
				str[j] = new[i];
				break;
			}
			i++;
		}

		j++;
	}
	return (str);
}
