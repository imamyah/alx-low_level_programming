#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: The string to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (rev = length; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
