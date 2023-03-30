#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: copy from
 * @dest: cpopy to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;
	int j;

	while (src[length] != '\0')
	{
		length++;
	}
	for (; i < length && src[length] != '\0'; i++)
	{
		j = dest[length];
		dest[length] = src[i];
		src[i] = j;
	}
	dest[length] = '\0';
	return (dest);
}
