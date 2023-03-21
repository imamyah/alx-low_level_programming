#include"main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * @ch: The character to print
 * Return: On success 1
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
