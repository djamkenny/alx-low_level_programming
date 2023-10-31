#include "main.h"

/**
 * read_elf_header - Read and parse the ELF header.
 * @fd: File descriptor of the ELF file.
 * @header: Pointer to the ELF header structure.
 *
 * Return: 0 if successful, -1 on error.
 */
int read_elf_header(int fd, Elf32_Ehdr *header)
{
	if (read(fd, header, sizeof(Elf32_Ehdr)) == -1)
	{
		return (-1);
	}

	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	    header->e_ident[EI_MAG1] != ELFMAG1 ||
	    header->e_ident[EI_MAG2] != ELFMAG2 ||
	    header->e_ident[EI_MAG3] != ELFMAG3)
	{
		return (-1);
	}

	return (0);
}

/**
 * display_elf_header_info - Display information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header_info(Elf32_Ehdr *header)
{
	printf("Magic: %02x %02x %02x %02x %02x %02x %02x %02x %02x
			%02x %02x %02x %02x %02x %02x %02x\n",
		   header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
		   header->e_ident[EI_MAG2], header->e_ident[EI_MAG3],
		   header->e_ident[EI_CLASS], header->e_ident[EI_DATA],
		   header->e_ident[EI_VERSION],
		   header->e_ident[EI_OSABI], header->e_ident[EI_ABIVERSION],
		   header->e_type, header->e_entry);

	printf("Class: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little-endian" : "Unknown data format");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %x\n", header->e_entry);
}

/**
 * main - Entry point for the ELF header program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 if successful, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Cannot open ELF file\n");
		return (98);
	}

	Elf32_Ehdr header;

	if (read_elf_header(fd, &header) != 0)
	{
		dprintf(2, "Error: Not a valid ELF file\n");
		close(fd);
		return (98);
	}

	display_elf_header_info(&header);
	close(fd);
	return (0);
}

