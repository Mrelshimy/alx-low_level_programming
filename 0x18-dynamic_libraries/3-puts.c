#include "main.h"

/**
 * _puts - String length function
 *@str : String
 *
 * Discription : Function to print string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

