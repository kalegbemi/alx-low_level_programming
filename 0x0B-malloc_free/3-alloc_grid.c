#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function to return a pointer to a 2 dimensional array
 * @width: The parameter for the width of the array
 * @height: The parameter for the height of the array
 * Return: NULL if failed pointer on (success)
 */
int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
	{	free(output);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output == NULL)
		{
			for (i--; i <= 0; i--)
			free(output[i]);
			free(output);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		output[i][j] = 0;
		}
	}
	return (output);
	free(output);
	free(output[i]);
}
