#include "main.h"

/**
 *create_file - read and print text file
 *@filename : pointer to file name
 *@text_content : tect content
 *
 *Discription: Function te read file and print it to STDOUT
 *
 *Return: 1 success , -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int l = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	
	if (fp == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
			l++;
	}
	
	if (write(fp, text_content, l) != -1)
		return (1);
	else
		return (-1);

	close(fp);
	return (1);
}
