#include "function_pointers.h"

/**
 *print_name - print a giben name
 *@name: name
 *@f: pointer to fn
 *Discription: Function to print a given name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
