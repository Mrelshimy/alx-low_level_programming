#include "main.h"

/**
  * _isupper - C prog for checking if char is uppercase
  * @c : character to be checked
  *
  * Discription : Program for checking f a char is uppercase
  *
  *Return: 1 (Success) , 0 Fail
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
