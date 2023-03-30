#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input value
 * @s2: input value
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1 != s2)
		{
			return (s1 - s2);
		}
	}
	return (0);
}
