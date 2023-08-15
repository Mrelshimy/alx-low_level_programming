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
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
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
