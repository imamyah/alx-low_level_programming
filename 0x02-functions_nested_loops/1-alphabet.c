#include"main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * @ch: The character to print
 * Return: On success 1
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
