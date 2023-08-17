#include "main.h"

/**
 * print_diagonal - prints n times of \
 *@n : number of \ to print
 *
 * Return: On success 1.
 */

void print_diagonal(int n)
{

	while (n >= 1)
	{
		int m = n-1;

		while (m >= 1)
		{
			_putchar(' ');
			m--;
		}
		_putchar(92);
		n--;
	}

	_putchar('\n');
}
