#include "main.h"
/**
 * _islower - Function for checking a letter is lower case
 *@c : parameter
 *
 * Discription : a C file for checking if a letter is lower case
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
