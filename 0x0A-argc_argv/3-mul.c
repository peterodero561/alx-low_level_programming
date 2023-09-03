/*
 * File: 3-mul.c
 * Auth: Peter
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints multiplication of two numbers
 * @argc: counter of elements in @argv
 * @argv: array holding all arguments passed to the program
 *
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
