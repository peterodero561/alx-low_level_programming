/*
 * File: 4-pow_recursion.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _pow_recursion - returns value of @x raised to @y
 * @x: base number
 * @y: power
 *
 * Return: @x raised to @y and -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return x * _pow_recursion(x, y - 1);
}
