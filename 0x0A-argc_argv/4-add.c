/*
 * File: 4-add.c
 * Auth: Peter
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of positive numbers
 * @argc: counter for elements in @argv
 * @argv: array holding elements passed into the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
