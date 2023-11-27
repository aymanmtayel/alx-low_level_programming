#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0 if success, -1 if failed
 */

int main(int argc, char **argv)
{
	int file1, file2, file_c;
	char temp[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((file_c = read(file1, temp, 1024)) > 0)
	{
		if (file_c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		file_c = write(file2, temp, file_c);
		if (file_c == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
		if (file_c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (close(file1) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
		if (close(file2) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
		return (0);
}
