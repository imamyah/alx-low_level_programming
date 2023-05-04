#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a give index
 * @n: the pointer to a number
 * @index: the index to set to 1
 *
 * Return: 1 in Success, otherwise -1
 */

int clear_bit(unsigned lonf int *n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	*n = *n & ~(mask << index);
	return (1);
}
