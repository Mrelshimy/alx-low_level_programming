#include <stdio.h>

/**
 * print_number - prints integer
 *
 *@n : number printed
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((m / 10) > 0)
		print_number(n / 10);

	_putchar((m % 10) + '0');
}
