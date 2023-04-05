#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the input string
 *
 * Return: the legth of a string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
