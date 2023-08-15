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
	int f = 0;
	int g = 1;
	int h = 1;

	for (i = 1 ; i <= 50 ; i++)
	{
		printf("%d, ", h);
		f = g;
		g = h;
		h = f + g;
	}
	printf("\n");

	return (0);
}
