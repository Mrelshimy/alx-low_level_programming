#include "main.h"

/**
 * print_diagonal - prints n times of \
 *@n : number of \ to print
 *
 * Return: On success 1.
 */

void print_diagonal(int n)
{
	int m, o;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for  (m = 1 ; m <= n ; m++)
		{
			for (o = 1 ; o < m ; o++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
