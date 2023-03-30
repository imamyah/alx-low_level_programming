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
	int i;

	while (src[i] != '\0')
	{
		length++;
		i++;
	}
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
