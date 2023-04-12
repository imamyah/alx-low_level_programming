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

	ac = malloc(sizeof(int *) * height);

	if (ac == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ac[i] = malloc(sizeof(int) * width);

		if (ac[i] == NULL)
		{
			while (i >= 0)
			{
				free(ac[i]);
				i--;
			}
			free(ac);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ac[i][j] = 0;
	}

	return (ac);
}
