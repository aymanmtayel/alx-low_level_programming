#include "main.h"

/**
 * print_error - print an error message to stderr
 * @msg: the error message to print
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
}

/**
 * print_elf_header - print the information contained in the ELF header
 * @ehdr: a pointer to the ELF header structure
 */
void print_elf_header(const Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
	       ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
	       ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       "2's complement, big endian");
	printf("  Version:                           %d%s\n",
	       ehdr->e_ident[EI_VERSION], ehdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %d\n", ehdr->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", ehdr->e_type);
	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	ssize_t n;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
		return (EXIT_FAILURE);
	}

	n = read(fd, &ehdr, sizeof(ehdr));
	if (n == -1)
	{
		print_error("Failed to read ELF header");
		close(fd);
		return (EXIT_FAILURE);
	}
	if (n != sizeof(ehdr))
	{
		print_error("Incomplete ELF header");
		close(fd);
		return (EXIT_FAILURE);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	    ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
		close(fd);
		return (EXIT_FAILURE);
	}

	print_elf_header(&ehdr);

	close(fd);
	return (EXIT_SUCCESS);
}
