#include "main.h"

/**
 *_puts_recursion - puts function code
 *@s : String to apply
 *
 *Description : a function to excute puts function using recursion .
 *
 *Return: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
}
