#include <stdio.h>

/**
 *  main  - Entry point
 *
 * Discription : a C file for printing sum of een fibonacci numbers
 * below 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 1;
	int d = 0;

	while (c < 4000000)
	{
		a = b;
		b = c;
		c = a + b;

		if (c % 2 == 0)
			d += c;
	}

	printf("%d\n", d);
	return (0);
}
