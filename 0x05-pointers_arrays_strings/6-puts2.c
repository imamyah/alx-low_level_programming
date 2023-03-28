#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting from the first character
 * fllowed by a new line
 * @str: The string
 * Return: Always 0
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (i = 0; i <= length; i++)
	{
		if (i % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
