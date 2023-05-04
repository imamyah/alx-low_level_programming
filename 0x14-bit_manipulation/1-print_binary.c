#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 *
 * Return: the resulte
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	/**assuming 64-bit integer*/
	for (i = 63; i >= 0; i--)
	{
		/**calculate bitmask to check whether
		 * ith bit of n is set or not*/
		mask = 1 << i;

		/**ith bit of num is set*/
		if (mask & n)
			_putchar('1');
		/**ith bit of num is not set*/
		else
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
