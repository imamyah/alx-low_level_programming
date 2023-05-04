#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number change
 * @index: the index to set to 1
 *
 * Return: 1 in Success, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
