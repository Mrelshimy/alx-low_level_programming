#include "main.h"

/**
 *_strstr - strstr function code
 *@haystack : String to search inside
 *@needle : string to search for
 *
 *Description : a function to excute strstr
 *
 *Return: location of first occurance of needle
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = needle;
		char *h = haystack;

		while (*h == *p && *p != '\0')
		{
			p++;
			h++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return ('\0');
}

