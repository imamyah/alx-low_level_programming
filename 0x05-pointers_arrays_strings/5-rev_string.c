#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int counter = 0;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;
	for (rev = counter; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
}
