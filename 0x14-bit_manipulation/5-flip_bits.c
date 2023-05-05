#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int mask;
	unsigned long int XOR = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		mask = XOR >> i;
		if (mask & 1)
			count++;
	}

	return (count);
}
