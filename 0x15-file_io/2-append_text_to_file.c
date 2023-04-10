#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: the name of the file to append to
 *@text_content: bytes to be added to the file
 *Return: 1 if done -1 if failed
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	w = write(o, text_content, strlen(text_content));

	if (w == -1)
		return (-1);
	return (1);
}
