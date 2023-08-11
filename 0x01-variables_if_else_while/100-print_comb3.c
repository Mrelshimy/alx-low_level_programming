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

	while (n < 9)
	{
		int m = 0;

		while (m <= 9)
		{
			if (m == n || m < n)
			{
				m++;
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
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
