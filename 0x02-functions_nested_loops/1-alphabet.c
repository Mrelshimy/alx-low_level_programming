#include "main.h"

/**
 * main - Entry point
 *
 * Discription : a C file for printing alphabet i lower case usnig _putchar()
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
