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
	for (;*haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
