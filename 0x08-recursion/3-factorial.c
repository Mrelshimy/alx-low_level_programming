#include "main.h"

/**
 *factorial - return a factorial
 *@n : int to apply
 *
 *Description : a function to return factorial of an int .
 *
 *Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
