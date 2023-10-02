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
	int twrite = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1)
	l = strlen(text_content);
	if (!l)
		return (-1);
	twrite = write(fp, text_content, l);
	if (fp == -1 || twrite == -1)
		return (-1);

	close(fp);
	return (1);
}
