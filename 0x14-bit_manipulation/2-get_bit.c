#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the index
 *
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
