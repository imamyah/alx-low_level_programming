#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: input value
 * @dest: input value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (; i < length && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
