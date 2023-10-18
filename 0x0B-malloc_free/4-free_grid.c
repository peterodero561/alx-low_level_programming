/*
 * File: 4-free_grid.c
 * Auth: Peter
 */

#include "main.h"
#include <stdlib.h>

/**
 * fre_grid - frees a 2d grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
