#include "main.h"

/**
 * print_rev - print string in reverse
 *@s : String
 *
 * Discription : Function to print string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

