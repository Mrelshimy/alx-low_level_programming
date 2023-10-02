#include "main.h"

/**
 *append_text_to_file - read and print text file
 *@filename : pointer to file name
 *@text_content : tect content to append
 *
 *Discription: Function to append text to file
 *
 *Return: 1 success , -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp = open(filename, O_WRONLY, O_APPEND);
	int l;

	if (fp == -1)
		return (-1);
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		l = strlen(text_content);
	if (write(fp, text_content, l) != -1)
		return (1);
	else
		return (-1);

	close(fp);
	return (1);
}
