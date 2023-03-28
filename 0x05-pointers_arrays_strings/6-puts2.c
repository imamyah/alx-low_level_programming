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
	int i;

	while (*(str + i) != '\0')
	{
		str++;
	}
	if (i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
