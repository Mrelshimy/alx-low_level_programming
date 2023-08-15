#include "main.h"
/**
 *  print_sign - Function for printing the sign of an int
 *@n : parameter
 *
 * Discription : a C file for printing the sign of an int
 *
 * Return: Always 1 (Success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
