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

	while (n <= 7)
	{
		int m = 0;

		while (m <= 8)
		{
			int o = 0;

			while (o <= 9)
			{

				if (m == n || m == o || n == o || m < n || o < n || o < m)
				{
					o++;
					continue;
				} else
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + o);
					if (n != 7 || m != 8 || o != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
