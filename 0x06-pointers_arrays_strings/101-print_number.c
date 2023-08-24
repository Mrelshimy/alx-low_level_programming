#include "main.h"

/**
 *print_number - encodes string usinr ROT13
 *@n :int
 *
 *Discription Function to print integer
 *
 *Return: str
 */

void print_number(int n)
{
	unsigned int i = 0;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
