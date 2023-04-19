#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure otherwise the concatenates strings
 */

char *str_concat(char *s1, char *s2)
{
	char *len;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	len = malloc(sizeof(char) * (i + j + 1));

	if (len == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		len[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		len[i] = s2[j];
		j++;
		i++;
	}

	len[i] = '\0';

	return (len);
}
