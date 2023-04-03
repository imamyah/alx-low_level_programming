#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy from
 * @src: copy to
 * @n: nomber of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
