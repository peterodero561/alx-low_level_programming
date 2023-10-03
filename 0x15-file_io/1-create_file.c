/*
 * File: 1-create_file.c
 * Auth: Peter
 */

#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to ctreate
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure || filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{{
		content_length = 0;
		while (text_content[content_length] != '\0')
			content_length++;
	}
	bytes_written = write(fd, text_content, content_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}}
	close(fd);
	return (1);
}
