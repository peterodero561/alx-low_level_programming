/*
 * File: 9-fizz_buzz
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>

/**
 * main  - prints 1 - 100 but multiple of 3 it prints Fizz
 * and multiple of 5 it prints Buzz
 * and multiple of 3 && 5 it prints FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
