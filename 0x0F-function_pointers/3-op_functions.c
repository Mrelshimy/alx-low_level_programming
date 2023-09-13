#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Fn to add 2 ints
 * @a: 1st int
 * @b: 2nd int
 *
 *Return: Addition result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Fn to subtract 2 ints
 * @a: 1st int
 * @b: 2nd int
 *
 *Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Fn to multiplicate 2 ints
 * @a: 1st int
 * @b: 2nd int
 *
 *Return: Multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- Fn to divide 2 ints
 * @a: 1st int
 * @b: 2nd int
 *
 *Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- Fn to modulu ints
 * @a: 1st int
 * @b: 2nd int
 *
 *Return: Remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

