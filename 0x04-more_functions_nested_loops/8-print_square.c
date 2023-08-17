#include "main.h"

/**
 * print_square - prints "size" square of #
 *@size : square dimension
 *
 * Return: On success 1.
 */

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
