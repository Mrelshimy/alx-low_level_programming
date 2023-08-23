#include "main.h"

/**
 *string_toupper - change all lowercase letters to uppercase in a string
 *@str :Char
 *
 *Return: Always 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i ; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
