#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int counter = 0;
	char rev;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
