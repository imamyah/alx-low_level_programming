#include "main.h"

/**
 * primeFinder - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the number we'll go through
 *
 * Return: whether or not the number is a prime number
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}


/**
 * is_prime_number - finds if a number is a prime number
 * @n: the input number
 *
 * Return: 1 if n is prime number otherwise 0
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
