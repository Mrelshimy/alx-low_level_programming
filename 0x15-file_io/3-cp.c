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

int main(int argc, char *argv[])
{
	int tfp, ffp;
	int rt, wt;
	char readsize[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffp = open(argv[1], O_RDONLY);
	if (ffp == -1)
	{
		eprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tfp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tfp == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rt = read(ffp, readsize, BUFF_SIZE)) > 0)
		if(write(tfp, readsize, rt) != rt)
		{
			dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (close(ffp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffp);
		exit(100);
	}
	if (close(tfp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfp);
		exit(100);
	}
	return (0);
}
