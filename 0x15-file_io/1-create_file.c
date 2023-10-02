#include "main.h"


/**
 * create_file - Function to create file.
 * @filename: pointer to filename
 * @text_content: pointer to text content
 *
 * Return: 1 success -1 fail.
 * 
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int twrite;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	twrite = write(fp, text_content, l);

	if (fp== -1 || twrite == -1)
		return (-1);
	close(fp);
	return (1);
}
