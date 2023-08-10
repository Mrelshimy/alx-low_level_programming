#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program for printing a certain phrase
 * using write() function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char stat[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, stat, 59);
	return (1);
}
