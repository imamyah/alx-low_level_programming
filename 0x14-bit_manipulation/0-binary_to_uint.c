#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string
 *
 * Return: the converted value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		d = 2 * d + (b[i] - '0');
	}

	return (d);
}
