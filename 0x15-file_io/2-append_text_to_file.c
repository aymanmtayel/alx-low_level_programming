#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the file name
 * @text_content: text to be appended to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t openf, writef;

	if (!filename)
		return (-1);

	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
		return (-1);
	if (text_content)
	{
		writef = write(openf, text_content, strlen(text_content));
		if (writef == -1)
			return (-1);
	}
	return (1);
}


