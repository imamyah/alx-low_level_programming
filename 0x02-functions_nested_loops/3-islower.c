#include"main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *  Return: On success 1, otherwise )
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
