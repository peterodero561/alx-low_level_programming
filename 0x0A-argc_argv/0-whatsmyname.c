/*
 * File: 0-whatsmyname.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main -prints its name and a new line
 * @argc: counter for elements in @argv
 * @argv: an array holding all strings used in ececutung the executale
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
