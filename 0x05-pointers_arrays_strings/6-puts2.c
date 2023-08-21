#include "main.h"

/**
 * puts2 - print every other char in string
 *@str : String
 *
 * Discription : Function to print every other char in  a string
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i -= 1;


	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}

