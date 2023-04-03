#include "mai.h"

/**
 * _strchr - locates a character in a string
 * @s: input value
 * @c: occurence character
 *
 * Return: a poinetr s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (c == '\0')
		return (s);
	return (NUll);
}
