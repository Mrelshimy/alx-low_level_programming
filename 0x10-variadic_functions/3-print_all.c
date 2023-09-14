#include "variadic_functions.h"

/**
 *print_all - print all i/p args
 *@format: list of types
 *
 *Discription: Function to print all i/p arguments
 *
 */

void print_all(const char * const format, ...)
{
	char *s1, *s = "";
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(args, double));
					break;
				case 's':
					s1 = va_arg(args, char*);
					if(!s1)
						s1 = "(nil)";
					printf("%s%s", s, s1);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
