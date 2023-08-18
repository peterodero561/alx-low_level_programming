/*
 * File: _putchar.c
 * Auth: Peter
 */

#include <unistd.h>

/**
 * _putchar - writes a given character to stdout
 * @c: character to print
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
