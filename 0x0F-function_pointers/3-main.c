#include "3-calc.h"
#include <stdlib.h>

/**
 *main - entry point
 *@argc: arguments count
 *@argv: array of arguments
 *
 *Discription: Function to operate calculations on 2 ints
 *
 *Return: result
 */

int main(int argc, char *argv[])
{
	char *p;

	p = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == 0 || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[3]) == 0 && *p == '/') || (atoi(argv[3]) == 0 && *p == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
