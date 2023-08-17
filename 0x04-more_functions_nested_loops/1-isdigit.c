#include "main.h"

/**
  * _isdigit - C prog for checking if int is digit
  * @c : character to be checked
  *
  * Discription : Program for checking if int is digit
  *
  *Return: 1 (Success) , 0 Fail
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
