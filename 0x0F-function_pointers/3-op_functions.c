#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - return the sum of two integers
 * @a: first element
 * @b: second element
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two integers
 * @a: first element
 * @b: second element
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two integers
 * @a: first element
 * @b: second element
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two integers
 * @a: the first element
 * @b: the second element
 *
 * Return: the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of two integers
 * @a: the first element
 * @b: the second element
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
