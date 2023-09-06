#include "main.h"

/**
 *main - program that copies the content of a file to another file
 *@argc: number of arguments
 *@argv: values of arguments
 *Return: 0 on done
 *
 */
int main(int argc, char **argv)
{
	int f1, f2, fcheck;
	char store[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((fcheck = read(f1, store, 1024)) > 0)
	{
		if (fcheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fcheck = write(f2, store, fcheck);
		if (fcheck == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
		if (fcheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (close(f1) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
		if (close(f2) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
		return (0);
}
