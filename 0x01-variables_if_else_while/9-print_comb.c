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

	do {
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		n++;
	} while (n < 9);

	putchar('0' + n);
	return (0);
}
