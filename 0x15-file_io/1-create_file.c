#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: name of the file to be created
 *@text_content: bytes to be written inside the file
 *Return: -1 if any errors and 1 on success
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(o, text_content, strlen(text_content));
		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}
	close(o);
	return (1);
}
