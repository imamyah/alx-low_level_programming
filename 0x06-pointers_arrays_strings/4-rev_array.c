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
	int rev;

	for (i = 0; i < n--; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
