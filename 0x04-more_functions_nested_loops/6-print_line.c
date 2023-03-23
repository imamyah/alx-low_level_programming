#include "main.h"

/**
 * print_line - draws a straight line
 * @n: The number of time _ should be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	char c = '_';

	if (n <= 0)
	{
		_putchar('\n');
	} else if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

