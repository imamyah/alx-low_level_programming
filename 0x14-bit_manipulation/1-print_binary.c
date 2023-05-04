#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 *
 * Return: the resulte
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask;

	/**assuming 64-bit integer*/
	for (i = 63; i >= 0; i--)
	{
		/**calculate bitmask to check whether
		 * ith bit of n is set or not*/
		mask = n >> i;

		if (mask & 1)
		{
			_putchar('1');
			count++;
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
