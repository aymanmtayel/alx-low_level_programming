#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to file name
 * @text_content: the contents to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t openf, writef;

	if (!filename)
		return (-1);
	openf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (openf == -1)
		return (-1);
	if (text_content)
	{
		writef = write(openf, text_content, strlen(text_content));
		if (writef == -1)
		{
			close(openf);
			return (-1);
		}
	}
	close(openf);
	return (1);
}
