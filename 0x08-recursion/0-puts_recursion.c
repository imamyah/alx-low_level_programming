#include "main.h"

/**
 * _puts_recursion - prints a string
 * followed by a new line
 * @s: the input string
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		_putchar(s[i]);

	i++;

	_putchar('\n');
}
