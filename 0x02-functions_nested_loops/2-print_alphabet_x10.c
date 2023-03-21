#include"main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 * Return: On success 1
 * On error, -1 is returned, and errno is set approprietely
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
