#include "main.h"

/**
 *read_textfile - read and print text file
 *@filename : pointer to file name
 *@letters : letters to read
 *
 *Discription: Function te read file and print it to STDOUT
 *
 *Return: actual number of letters , 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *readsize;
	int fp;
	int textout;

	if (filename == NULL || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	readsize = malloc(letters);
	textout = read(fp, readsize, letters);
	textout = write(STDOUT_FILENO, readsize, textout);

	free(readsize);
	close(fp);
	return (textout);
}
