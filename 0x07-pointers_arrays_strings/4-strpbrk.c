#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input value
 * @accept: occurrence bytes string
 *
 * Return: s otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	int i = 0;
	while (*s)
	{
		if (*s == accept[i])
			return (s);
		s++;
		i++;
	}
	if (*accept == '\0')
		return (s);

	return (NULL);
}
