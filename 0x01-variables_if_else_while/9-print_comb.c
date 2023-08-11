#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing all possible combinations
 * of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
