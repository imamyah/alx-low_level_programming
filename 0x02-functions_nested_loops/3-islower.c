#include"main.h"
/**
 * -islower - checks for lowercase character
 *  Return: On success 1
 *  on error, 0 is returned, and errno is set approprietely
 */

int _lower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
