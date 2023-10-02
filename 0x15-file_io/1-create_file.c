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
	int l;
	int twrite;

	if (filename == NULL)
		return (-1);

	l = strlen(text_content);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	twrite = write(fp, text_content, l);
	if (fp == -1)
		return (-1);

	if (twrite == -1)
		return (-1);

	close(fp);
	return (1);
}
