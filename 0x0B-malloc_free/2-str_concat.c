#include "main.h"
#include <stdlib.h>

/**
  * str_concat - C prog to comcatenate 2 strings.
  * @s1 : string 1
  * @s2 : string 2
  *
  * Discription : Program for concatinating 2 strings
  *
  *Return: pointer to new memory (Success) , 0 Fail
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int size1 = 0;
	int size2 = 0;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	ptr = (char *) malloc(size1 + size2 - 1);

	if (ptr == 0)
		return (0);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < size2; i++)
		ptr[i + size1] = s2[i];

	return (ptr);
}
