#include <stdio.h>

/**
 * print_number - prints integer
 *
 *@n : number printed
 */

void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((num / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
