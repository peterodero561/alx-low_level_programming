/*
 * File: 2-args.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: counter for elements in @argv
 * @argv: array holding arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
