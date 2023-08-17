#include "main.h"

/**
 * print_line - prints n times of _
 *@n : number of _ to print
 *
 * Return: On success 1.
 */

void print_line(int n)
{

	while (n >= 1)
	{
		_putchar(95);
		n--;
	}

	_putchar('\n');
}
