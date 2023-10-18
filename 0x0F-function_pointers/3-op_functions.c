/*
 * File: 3-op_functions.c
 * Auth: Peter
 */

#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Sum of @a & @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 intergers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: subtraction of @a & @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys 2 intergers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: multiplication of @a & @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 intergers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: division of @a & @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of 2 intergers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: modulo of @a & @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

