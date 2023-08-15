#include "main.h"

/**
 * print_alphabet_x10 - a C file for printing alphabet in lower case
 * 10 times usnig _putchar()
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x <= 9)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		x += 1;
		_putchar('\n');
	}
}
