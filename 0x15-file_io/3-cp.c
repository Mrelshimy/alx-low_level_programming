#include "main.h"

char *buff(char *filename);
void closef(int fp);

/**
 * buff - mallocs 1024 bytes.
 * @filename : filename
 *
 * Return: pointer to buffer.
 */
char *buff(char *filename)
{
	char *nbuff;

	nbuff = malloc(1024);
	if (nbuff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (nbuff);
}

/**
 * closef - closes file
 * @fp: file descriptor
 */
void closef(int fp)
{
	int ch;

	ch = close(fp);
	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - Copies afile to another
 * @argc: arguments count
 * @argv: array of args
 *
 * description  copies a file to another
 *
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int ffp, tfp;
	int rt, wt;
	char *readsize;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	readsize = buff(argv[2]);
	ffp = open(argv[1], O_RDONLY);
	rt = read(ffp, readsize, 1024);
	tfp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ffp == -1 || rt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(readsize);
			exit(98);
		}
		wt = write(tfp, readsize, rt);
		if (tfp == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(readsize);
			exit(99);
		}
		rt = read(ffp, readsize, 1024);
		tfp = open(argv[2], O_WRONLY | O_APPEND);
	} while (rt > 0);
	free(readsize);
	closef(ffp);
	closef(tfp);
	return (0);
}

