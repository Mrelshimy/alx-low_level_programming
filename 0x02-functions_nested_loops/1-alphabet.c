#include "main.h"

/**
 * print_alphabet - a C file for printing alphabet in lower case
 * usnig _putchar()
 */

void print_alphabet(void) /* Function main body */
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
