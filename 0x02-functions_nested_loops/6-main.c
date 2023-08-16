/*
 * File: 6-main.c
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the absolute value of a given integer
 *
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
