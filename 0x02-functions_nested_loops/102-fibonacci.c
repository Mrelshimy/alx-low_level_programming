#include <stdio.h>

/**
 *  main  - Entry point
 *
 * Discription : a C file for printing first 5- fibonacci numbers
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long f = 0;
	unsigned long g = 1;
	unsigned long h = 1;

	for (i = 1 ; i <= 50 ; i++)
	{
		printf("%lu", h);
		f = g;
		g = h;
		h = f + g;
		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	printf("\n");

	return (0);
}
