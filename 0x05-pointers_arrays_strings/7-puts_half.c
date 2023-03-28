#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: The input
 * Return: halt the string
 */

void puts_half(char *str)
{
	char length_of_the_string = 0;
	int n = (length_of_the_string - 1) / 2;

	while (*str != '\0')
	{
		length_of_the_string++;
		str++;
	}
	if (length_of_the_string % 2 != 0)
		_putchar(n);
	else
		_putchar(*str / 2);
}
