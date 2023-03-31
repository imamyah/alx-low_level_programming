#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input value
 *
 * return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (str[i] == ' '|| str[i] == '\t'|| str[i] == '\n'|| str[i] == ','|| str[i] == ';'|| str[i] == '?'|| str[i] == '!' || str[i] == '"'|| str[i] == '('|| str[i] == ')'|| str[i] == '{'|| str[i] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
	return (0);
}
