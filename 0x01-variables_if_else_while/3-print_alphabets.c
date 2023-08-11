#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing alphabet
 * in lowercase uning putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	for (alpha >= 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	alpha = 'A';

	for (alpha >= 'A' ; alpha <= 'Z' ; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
