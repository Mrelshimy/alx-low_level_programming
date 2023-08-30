#include "main.h"

/**
 *_pow_recursion - return  x to power y
 *@x : int to duplicate
 *@y : power
 *
 *Description: a function to return x to the power y .
 *
 *Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
