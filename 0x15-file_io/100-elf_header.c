#include "main.h"

/**
 * p_error - prints error messages to standard error
 * @msg: the message
 * Return: Void
 */
void p_error(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
}

/**
 * print_elf_header - print the information contained in the ELF header
 * @ehdr: a pointer to the ELF header structure
 */

void print_elf_header(Elf64_Ehdr *ehdr)
{
	int counter;

	printf("  Magic:   ");
	for (counter = 0; counter < EI_NIDENT; counter++)
		printf("%02x ", ehdr->e_ident[counter]);
	printf("\n");

	printf("  Class:   %s\n",
	       (ehdr->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:    %s\n",
	       (ehdr->e_ident[EI_DATA] == ELFDATA2LSB) ?
	       "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:  %d\n", ehdr->e_ident[EI_OSABI]);
	printf("  ABI Ver: %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:    %s\n",
	       (ehdr->e_type == ET_EXEC) ? "EXEC (Executable file)" :
	       (ehdr->e_type == ET_DYN) ? "DYN (Shared object file)" :
	       (ehdr->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
	printf("  Entry:   %lx\n", (unsigned long)ehdr->e_entry);
}

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	int f_o;
	Elf64_Ehdr ehdr;
	ssize_t f_r;

	if (argc != 2)
		p_error("Usage: elf_header elf_filename"), exit(98);
	f_o = open(argv[1], O_RDONLY);
	if (f_o == -1)
		p_error("Failed to open file"), exit(98);
	f_r = read(f_o, &ehdr, sizeof(ehdr));
	if (f_r == -1)
	{
		p_error("Failed to read ELF header");
		close(f_o);
		return (EXIT_FAILURE);
	}
	if (f_r != sizeof(ehdr))
	{
		p_error("Incomplete ELF header");
		close(f_o);
		return (EXIT_FAILURE);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	    ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		p_error("Not an ELF file");
		close(f_o);
		return (EXIT_FAILURE);
	}

	print_elf_header(&ehdr);
	close(f_o);
	return (EXIT_SUCCESS);
}
