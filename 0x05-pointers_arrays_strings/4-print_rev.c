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

	while (*s != '\0')
	{
		length++;
		s++;
		for (; length <= *s; length--)
			_putchar(*s--);
	}
	_putchar('\n');
}
