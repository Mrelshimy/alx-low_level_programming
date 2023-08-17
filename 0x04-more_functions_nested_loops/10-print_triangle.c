#include "main.h"

/**
 * print_triangle - prints triangle of "size"
 *
 * @size : triangle size
 */

void print_triangle(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	else
	{

	for (l = 1 ; l <= size ; l++)
	{
		for (m = 1 ; m <= size ; m++)
		{
			if (l + w <= size)
				_putchar(' ');
			_putchar('35');
		}
		_putchar('\n');
	}
	}
}
