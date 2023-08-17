#include "main.h"

/**
 * print_most_numbers - prints 01356789
 *
 * Return: On success 1.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		else
		{
		_putchar(i + '0');
		i++;
		}
	}
	_putchar('\n');
}
