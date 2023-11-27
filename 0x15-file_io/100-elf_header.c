#include "main.h"

/**
 * print_elf_header - Prints information from the ELF header
 * @elf_h: Pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *elf_h)
{
	int counter;

	printf("  Magic:   ");
	for (counter = 0; counter < EI_NIDENT; counter++)
		printf("%02x ", elf_h->e_ident[counter]);
	printf("\n");

	printf("  Class:   %s\n",
	       (elf_h->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:    %s\n",
	       (elf_h->e_ident[EI_DATA] == ELFDATA2LSB) ?
	       "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d (current)\n", elf_h->e_ident[EI_VERSION]);
	printf("  OS/ABI:  %d\n", elf_h->e_ident[EI_OSABI]);
	printf("  ABI Ver: %d\n", elf_h->e_ident[EI_ABIVERSION]);
	printf("  Type:    %s\n",
	       (elf_h->e_type == ET_EXEC) ? "EXEC (Executable file)" :
	       (elf_h->e_type == ET_DYN) ? "DYN (Shared object file)" :
	       (elf_h->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
	printf("  Entry:   %lx\n", (unsigned long)elf_h->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fo, m_check;
	Elf64_Ehdr elf_h;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]), exit(98);

	fo = open(argv[1], O_RDONLY);
	if (fo == -1)
		perror("Error"), exit(98);

	if (read(fo, &elf_h, sizeof(elf_h)) != sizeof(elf_h))
		perror("Error"), close(fo), exit(98);
	if (lseek(fo, 0, SEEK_SET) == -1)
		perror("Error"), close(fo), exit(98);

	m_check = (elf_h.e_ident[EI_MAG0] != ELFMAG0 ||
		       elf_h.e_ident[EI_MAG1] != ELFMAG1 ||
		       elf_h.e_ident[EI_MAG2] != ELFMAG2 ||
		       elf_h.e_ident[EI_MAG3] != ELFMAG3);

	if (m_check)
		fprintf(stderr, "Error: Not an ELF file\n"), close(fo), exit(98);

	printf("ELF Header:\n");
	print_elf_header(&elf_h);

	close(fo);
	return (0);
}

