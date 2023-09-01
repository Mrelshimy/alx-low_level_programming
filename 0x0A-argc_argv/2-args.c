#include <stdio.h>

/**
 * main - entry point
 *@argc : arg count
 *@argv : arg vector
 *
 *Description: program to prin number of it's i/p arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
