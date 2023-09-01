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

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
