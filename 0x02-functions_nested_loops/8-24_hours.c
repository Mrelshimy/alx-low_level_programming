#include "main.h"
/**
 *  jack_bauer - Function for printing each minute of a day
 *
 * Discription : a C file for printing each minute of a day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h = 0;

	while (h <= 23)
	{
		int m = 0;

		while (m <= 59)
		{
			_putchar ((h / 10) + '0');
			_putchar ((h % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
			m += 1;
		}
	h += 1;
	}
}
