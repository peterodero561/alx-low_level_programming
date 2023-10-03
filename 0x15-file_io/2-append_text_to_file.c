/*
 * File: 2-append_text_to_file.c
 * Auth: Peter
 */

#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on faiure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int content_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_len = 0;
		while (text_content[content_len != '\0'])
			content_len++;
		bytes_written = write(fo, text_content, content_len);
		if (bytes_written == -1)
		{
			close(fo);
			return (-1);
		}
	}
	close(fo);
	return (1);
}
