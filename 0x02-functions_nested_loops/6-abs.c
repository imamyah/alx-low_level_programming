#include"main.h"
/**
 * _abs - computes the absolute value of an inteher
 * @n: the absolute value of an integer
 * Return: ALways 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	} else
	{
		return (n);
	}
	return (0);
}
