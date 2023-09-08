/*
 * File: 101-mul.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void print(char *n);
/**
 * multiplication - multiplies two positive numbers
 * @num1: one of the numbers
 * @num2: the other numbers
 *
 * Return: pointer to the result
 */

int multiplication(int num1, int num2)
{
	int mul;
	char *er;
	
	er = "Error";
	if (num1 < 0 || num2 < 0)
	{
		print(er);
		exit(98);
	}
	if (num1 >= '0' && num1 <= '9' && num2 >= '0' && num2 <= '9')
	{
		mul = malloc(sizeof(mul));
		if (mul == NULL)
			return (0);
		mul = num1 * num2;
		return (mul);
	}
	else
	{
		print(er);
		exit(98);
	}
}

/**
 * print - prints error
 * @n: parameter to be printed
 *
 * Return: Nothing
 */

void print(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
	}
	_putchar('/n');
}
