#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing alphabet except q and e
 * in lowercase uning putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
			continue;
		} else
		{
		putchar(alpha);
		alpha++;
		}
	}
	putchar('\n');
	return (0);
}
