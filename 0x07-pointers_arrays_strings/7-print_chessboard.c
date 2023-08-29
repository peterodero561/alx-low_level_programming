/*
 * File: 7-print_chessboard.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: name of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
