#include "main.h"

/**
 * puts_half - print part of string
 *@str : String
 *
 * Discription : Function to print th second half of a string
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	int j;

	j = i / 2;

	if (i % 2 == 0)
	{
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j += 1;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}

