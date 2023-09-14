#include "variadic_functions.h"

/**
 *print_strings - print all i/p args
 *@separator: i/p separator
 *@n: args count
 *
 *Discription: Function to print all i/p arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char* s;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if ( s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
