#include "main.h"

/**
 * main - Entry point
 *
 * Discription : a C file for printing _putchar usnig putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	for (i = 0 ; i <= 7 ; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
