#include "main.h"

/**
 * rev_string - print string in reverse
 *@s : String
 *
 * Discription : Function to reverse a string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	i -= 1;


	while (j < (i - 1 / 2))
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}

