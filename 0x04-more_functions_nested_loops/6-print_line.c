#include "main.h"

/**
 * print_line - prints n times of _
 *@n : number of _ to print
 *
 * Return: On success 1.
 */

void print_line(int n)
{
	int m;

	for (m = 1; m <= n; m++)
	{
		_putchar(95);
	}
	_putchar(92);
	_putchar(110);
}
