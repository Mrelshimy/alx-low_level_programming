#include "main.h"
/**
 *  print_last_digit - Function for printing the last digit in int
 *@n : parameter to check
 *
 * Discription : a C file for printing the last digit of int
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar('0' + n);
	return (n);
}
