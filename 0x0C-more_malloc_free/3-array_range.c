#include "main.h"
/**
 * *array_range - function to creat an array
 * @min: the minimum number of the array
 * @max: the maximum number of the array
 * Return: NULL output
 */
int *array_range(int min, int max)
{
	int *output;
	int k;
	int j;

	if (min > max)
		return (NULL);
	k = (max - min + 1);
	output = malloc(sizeof(int) * k);
	if (output == NULL)
		return (NULL);
	for (j = 0; j < k; j++)
	{
		output[j] = min;
		min++;
	}
	return (output);
}
