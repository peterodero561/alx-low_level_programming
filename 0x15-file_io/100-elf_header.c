#include "main.h"
/**
 * error_exit - prints aprppriate error message in case of failure
 * @message: pointer to the message to be
 * printed out incase of an error
 */

void error_exit(const char *message)
{
	printf("%s\n", message);
	exit(98);
}

/**
 * display_elf_header - displays the elf head
 * @filename: pointer to the filename
 *
 * Return: Nothing
 */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	char magic[4];
	int i;
	Elf32_Ehdr header;

	if (fd == -1)
		error_exit("Error openning file");
	if (read(fd, magic, 4) != 4 || strncmp(magic, "\x7F\x45\x4C\x46", 4) != 0)
		error_exit("Not valid ELF file");
	if (lseek(fd, 0, SEEK_SET) == -1)
		error_exit("Error seeking to ELF header");
	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
		error_exit("Error reading ELF header");
	printf("Magic: ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned char)header.e_ident[i]);
	printf("\n");
	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
	close(fd);
}
