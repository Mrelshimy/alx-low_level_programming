#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing numbers of hexa base
 * in lowercase using putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
		n++;
	}

	putchar('\n');
	return (0);
}
