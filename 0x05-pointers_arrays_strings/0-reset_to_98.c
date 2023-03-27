#include "main.h"

/**
 * reset_to_98 -  updates an int to the value points to 98
 * @n: an integer to reset to 98
 * Return: Always 0 (Success)
 */

void reset_to_98(int *n)
{
	int A[0] = 98;

	*n = A;

	_putchar(*n);
}
