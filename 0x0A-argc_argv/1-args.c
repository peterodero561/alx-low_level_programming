/*
 * File: 1-args.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments passed into @argv
 * @argv: an array holding all arguments passed into the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
