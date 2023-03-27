#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*b = i;
	*a = *b;
}
