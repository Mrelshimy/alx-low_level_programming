#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - C prog to concatenate 2 strings
  * @s1 : string 1
  * @s2 : string 2
  * @n : bytes to concatenate of s2
  *
  * Discription : Program for concatenate s1 with n bytes of s2
  *
  *Return: pointer to new memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1size = 0, s2size = 0;
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1size] != '\0')
		s1size++;
	while (s2[s2size] != '\0')
		s2size++;
	if (n >= s2size)
		n = s2size;

	ptr = malloc(s1size + n + 1);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < s1size; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[i + s1size] = s2[i];
	ptr[s1size + n] = '\0';

	return (ptr);

}
