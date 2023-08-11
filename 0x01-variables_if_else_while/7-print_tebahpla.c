#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing alphabet
 * in lowercase in reverse using putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
