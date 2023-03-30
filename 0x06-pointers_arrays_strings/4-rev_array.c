#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @n: number of elements in the array
 * @a: input array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i--;
	}
}
