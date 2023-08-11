#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing certain combinations
 * of two digit numbers , removing the duplicates
 * choosing the smallest combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for  (n ; n < 9 ; n++)
	{
		int m = 0;

		for (m ; m <= 9 ; m++)
		{
			if (m == n || m < n)
			{
				continue;
			} else
			{
				putchar('0' + n);
				putchar('0' + m);
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
