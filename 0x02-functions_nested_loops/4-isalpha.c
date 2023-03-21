#include"main.h"
/**
 * _isalpha - checkes for alphabetic character
 * @c: checks the alphabet
 * Return: On success 1,otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
