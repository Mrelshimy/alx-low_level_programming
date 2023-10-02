#include "main.h"
#define BUFF_SIZE 1024

/**
 *main - copies file to another filw
 *@argc : number of arguments
 *@argv : array of arguments
 *
 *Discription: Function to copy file to another
 *
 *Return: 0 on success
 */

int main (int argc, char *argv[])
{
	int tfp, ffp, l = 0;
	int rt, wt;
	char *readsize;	

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	ffp = open(argv[1], O_RDONLY);
	l = strlen(argv[1]);
	readsize = malloc(l);
	rt = read(ffp, readsize, l);
	if (ffp == -1 || rt == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	tfp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wt = write(tfp, readsize, rt);
	if (tfp == -1 || wt == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't write to file %s\n", argv[2]);
		exit (99);
	}

	free(readsize);
	close(ffp);
	close(tfp);
	return (0);
}
