#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: On success 1.
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
				_putchar(1 + '0');

			_putchar((n % 10) + '0');
			n++;
		}
		i++;
		_putchar('\n');
	}
}
