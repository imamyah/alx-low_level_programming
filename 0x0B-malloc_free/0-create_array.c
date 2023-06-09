#include "main.h"
#include <stdlib.h>

/**
 * create_array - craetes an array of chars and
 * initializes it with a specific char
 * @size: size of the string
 * @c: the size
 *
 * Return: the string otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
