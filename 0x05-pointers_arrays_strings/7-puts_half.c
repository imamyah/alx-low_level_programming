#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: The input
 * Return: halt the string
 */

void puts_half(char *str)
{
	int length = 0;
	int n, i;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
