#include "main.h"

/**
 *_strlen_recursion - return a string length
 *@s : String to apply
 *
 *Description : a function to return a string length using recursion .
 *
 *Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	else
		return (0);

	return (len);
}
