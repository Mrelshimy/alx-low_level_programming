#include "main.h"
/**
 *  _abs - Function for printing the absolute value of an int
 *@n : parameter to check
 *
 * Discription : a C file for printing the absolute value of an int
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
