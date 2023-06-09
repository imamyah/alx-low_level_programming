#include "main.h"

/**
 * _strncat - concatenates two strings
 * uses most n bytes from src
 * @src: input value
 * @dest: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
