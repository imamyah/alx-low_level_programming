#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed with a new line
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while(j < 10)
	{
		for (i = 0; i < 15; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}

