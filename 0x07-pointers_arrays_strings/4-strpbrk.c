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

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s != accept[i])
				s++;
			else
				return (s);
		}
	}
	if (*accept == '\0')
		return (s);

	return (NULL);
}
