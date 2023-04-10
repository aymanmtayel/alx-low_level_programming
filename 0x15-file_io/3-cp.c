#include "main.h"

/**
 *main - program that copies the content of a file to another file
 *@argc: number of arguments
 *@argv: values of arguments
 *Return: 0 on done
 *
 */

int main(int argc, char *argv[])
{
	int f1, f2, r;
	char store[1024];
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (stat(argv[2], &st) == 0)
	{
		f2 = open(argv[2], O_WRONLY | O_TRUNC);
	}
	else
		f2 = open(argv[2], O_WRONLY | O_CREAT, 0664);

	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(f1, store, 1024)) > 0)
	{
		if (write(f2, store, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	exit(0);
}
