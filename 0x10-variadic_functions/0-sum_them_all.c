#include "variadic_functions.h"

/**
 *sum_them_all - sum input args
 *@n: args count
 *
 *Discription: Function to sum all i/p arguments
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int s = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		s += x;
	}
	va_end(args);
	return (s);

}
