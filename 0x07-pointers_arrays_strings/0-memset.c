#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: poiter to
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned n)
{
	unsigned i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
