#include "main.h"
/**
 * times_table - Function for printing 9 times table
 *
 * Discription : a C file for printing 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a = 0;

	for (a <= 9; a; a++)
	{
		_putchar('0');
		b = 1;
		for (b <= 9; b; b++)
		{
			int c = a * b;

			_putchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
	}
}
