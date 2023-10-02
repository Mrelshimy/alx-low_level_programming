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
	ssize_t textread
	ssize_t fp = open(filename, O_RDONLY);
	ssize_t textout;

	if (filename == NULL || !letters)
		return (0);

	if (fp == -1)
		return (0);

	readsize = malloc(letters);
	textread = read(fp, readsize, letters);
	textout = write(STDOUT_FILENO, readsize, textread);

	if (textout == -1)
		return (0);

	free(readsize);
	close(fp);
	return (textout);
}
