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
		for (w = 1 ; w <= size ; w++)
		{
			if (l + w <= size)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	}
}
