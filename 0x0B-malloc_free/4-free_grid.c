#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free allocated memory from a 2 dimensional array
 * @height: the parameter of grid
 * @grid: a pointer to a pointer of height(height)
 * Return: 0 on (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
