#include "variadic_functions.h"

/**
 *print_numbers - print all i/p args
 *@separator: i/p separator
 *@n: args count
 *
 *Discription: Function to print all i/p arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
