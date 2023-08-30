#include "main.h"

/**
 *_sqrt_recursion - return sqrt of an int
 *@n : int to apply
 *@i : int
 *
 *Description: a function to return sqrt of an int .
 *
 *Return: int
 */

int check_sq(int n, int i);

int _sqrt_recursion(int n)
{
	return (check_sq(n, 1));
}

/**
 *check_sq - return sqrt of an int
 *@n : int
 *@i : int
 *
 *Description: a function to return sqrt of an int .
 *
 *Return: int
 */

int check_sq(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
		return (check_sq(n, i + 1));
	else
		return (-1);
}
