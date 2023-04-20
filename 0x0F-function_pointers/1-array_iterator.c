#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each of an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
