#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of the file
 *@letters: number of letters to read
 *Return: returns the actual number of letters it could read and print
 *0 if any error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_f, r_f, w_f;
	char *store;

	if (filename == NULL)
		return (0);

	store = malloc(sizeof(char) * (letters + 1));
	if (store == NULL)
		return (0);

	o_f = open(filename, O_RDONLY);
	r_f = read(o_f, store, letters);
	w_f = write(STDOUT_FILENO, store, r_f);

	if (w_f != r_f || w_f == -1 || r_f == -1 || o_f == -1)
	{
		close(o_f);
		free(store);
		return (0);
	}
	close(o_f);
	free(store);

	return (w_f);
}
