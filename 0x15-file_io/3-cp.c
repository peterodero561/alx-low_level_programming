/*
 * File: 3-cp.c
 * Auth: Peter
 */

#include "main.h"

/**
 * exit_with_error - prints the message of exit()
 * @exit_code: integer that exit()uses
 * @message: Message to print once exit() is executed
 *
 * Return: Nothing
 */

void exit_with_error(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - check code
 * @argc: checker
 * @argv: pointer to the file with text
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_source;
	int fd_dest;
	char buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to");
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fd_dest = open(file_to, O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_source);
		exit(99); }
	while ((bytes_read = read(fd_source, &buffer, 1)) > 0)
	{
		bytes_written = write(fd_dest, &buffer, 1);
		if (bytes_written == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_source);
			close(fd_dest);
			exit(99); }}
	if (bytes_read == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_source);
		close(fd_dest);
		exit(98); }
	if (close(fd_source) == -1 || close(fd_dest) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100); }
	return (0);
}
