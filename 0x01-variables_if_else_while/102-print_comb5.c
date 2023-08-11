#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program that prints
 * all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int m = 0;

	while (n <= 99)
	{
		m = n;
		while (m <= 99)
		{
			if (m != n)
			{
				putchar ((n / 10) + '0');
				putchar ((n % 10) + '0');
				putchar (' ');
				putchar ((m / 10) + '0');
				putchar ((m % 10) + '0');

				if (n != 98 || m != 99)
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
