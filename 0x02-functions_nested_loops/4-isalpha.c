#include "main.h"
/**
 * _isalpha - Function for checking a var if alphabetic
 *@c : parameter
 *
 * Discription : a C file for checking if a letter is lower case
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
