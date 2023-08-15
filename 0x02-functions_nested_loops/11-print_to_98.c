#include "main.h"
/**
 *  print_to_98 - Function for printing from int to 98
 *@n : integer
 *
 * Discription : a C file for printing from int to 98
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar(n + '0');
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
