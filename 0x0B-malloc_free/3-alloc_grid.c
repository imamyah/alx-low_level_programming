#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: the width of the string
 * @height: the height of the string
 *
 * Return: NULL on failure,
 * otherwise a pointer to a 2 dimentional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ac;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ac = malloc(sizeof(int) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[i][j] = 0;
	}

	return (ar);
}
