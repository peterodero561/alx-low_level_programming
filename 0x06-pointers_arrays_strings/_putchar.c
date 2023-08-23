/*
 * File: _putchar.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @c: character to be written to stdout
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
