#include "3-calc.h"
#include <stdlib.h>

/**
 *get_op_func - get the required function
 *@s : operator to function
 *
 *Discription: Function to get the reuquired function
 *
 *Return: pointer to chosen function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}, 
		{NULL, NULL},
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if ((*s) == ops[i].op[0])
			return (ops[i].f);
	}
	return(0);
}
