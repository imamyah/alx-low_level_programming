#include "main.h"

/**
 * _prints_rev_recursion - prints a string in reverse
 * @s: input string
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s - 1);
		_print_rev_recursion(s - 1);
	}
	return;
}
