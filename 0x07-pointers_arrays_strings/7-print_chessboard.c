#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i; i < 8; i++)
	{
		for (j; j < 8; j++)
			_putchar[i][j];
		_putchar('\n');
	}
}
