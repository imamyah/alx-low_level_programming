#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its all parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to sum
 *
 * Return: if n is 0 then 0, otherwise the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
