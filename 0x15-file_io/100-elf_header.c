#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdint.h>
#include <unistd.h>

/**
 * parseElfHeader - cpoies
 * @map: pointer to a file
 *
 * Return: Nothing
 */

void parseElfHeader(uint8_t *map)
{
	Elf64_Ehdr *ehdr = (Elf64_Ehdr *) map;

	fprintf(stderr, "Entry point: 0x%lx\n", ehdr->e_entry);
}

/**
 * main - check code
 * @argc: arguments
 * @argv: argumnet
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int fd;
	struct stat sb;
	uint8_t *map;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <target_binary_path>\n", argv[0]);
		exit(-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("while opening target binary");
		exit(-1);
	}
	if (fstat(fd, &sb) == -1)
	{
		perror("while fstat'ing target binary");
		exit(-1);
	}
	map = (uint8_t *)mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (map == MAP_FAILED)
	{
		perror("while mmap'ing target binary");
		exit(-1);
	}
	parseElfHeader(map);
}
