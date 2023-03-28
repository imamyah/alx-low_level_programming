#include "main.h"

/**
 * _puts - prints a string
 * followed by a new line
 * @str: The string
 * Return: the output
 */

void _puts(char *str)
{
	_putchar(*str++);
	_putchar('\n');
}
