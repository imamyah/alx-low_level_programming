#include"main.h"
/**
 * _islower - checks for lowercase character
 *  Return: On success 1, otherwise )
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
