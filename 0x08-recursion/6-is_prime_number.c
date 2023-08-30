#include "main.h"

/**
 *is_prime_number - check if int is prime
 *@n : int to apply
 *@i : int
 *
 *Description: a function to return 1 if int is prime .
 *
 *Return: int
 */

int check_pr(int n, int i);

int is_prime_number(int n)
{
	return (check_pr(n, 2));
}

/**
 *check_pr - check if numeber is prime
 *@n : int
 *@i : int
 *
 *Description: a function to return fnumber is prime.
 *
 *Return: int
 */

int check_pr(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n <= 1 || n % i == 0)
		return (0);
	else
		return (check_pr(n, i + 1));
}
