#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	ac = malloc(sizeof(int) * (max - min + 1));
	if (ac == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ar[j] = ar[i];

	return (ar);
}
