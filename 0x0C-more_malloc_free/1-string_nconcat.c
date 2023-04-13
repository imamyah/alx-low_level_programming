#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenatestwo strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2
 *
 * Return: On fail NULL, otherwise pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int len;
	char s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n >= j)
		j = n;

	len = j + i;

	s3 = malloc(sizeof(char) * len + 1);

	if (s3 == NULL)
		return (NULL);

	while (s1[i])
	{
		s3[k++];
		i++;
	}
	while (s2[j])
	{
		s3[k++];
		i++;
	}

	s3[k] = '\0';

	return (s3);
}
