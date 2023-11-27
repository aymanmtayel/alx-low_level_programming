#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to STDOUT
 * @filename: pointer to the file
 * @letters: number of letters to be read and printed
 * Return: the actual number of letter it could read and print, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readf, writef;
	char *temp;

	if (!filename || !letters)
		return (0);
	temp = malloc(sizeof(char) * (letters + 1));
	if (!temp)
		return (0);
	openf = open(filename, O_RDONLY);
	readf = read(openf, temp, letters);
	writef = write(STDOUT_FILENO, temp, readf);

	if (openf == -1 || readf == -1 || writef == -1 || writef != readf)
	{
		close(openf);
		free(temp);
		return (0);
	}
	close(openf);
	free(temp);
	return (writef);
}
