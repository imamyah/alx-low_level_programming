#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: begining of the located string otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
		needle++;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
			return (haystack);
		else
			break;
	}
	return (0);
}
