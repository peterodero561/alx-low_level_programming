/*
 * File: 10-print_triangle.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int s;
	int c;
	int z;

	if (size > 0)
	{
		for (s = 0; s < size; s++)
		{
			c = size - s - 1;
			while (z < size)
			{
				if (c > z)
					_putchar('\n');
				else
					_putchar('#');
				z++;
			}
			z = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
