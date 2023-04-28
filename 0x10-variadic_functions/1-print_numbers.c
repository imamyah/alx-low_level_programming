#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print number, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable of numbers to be printed
 *
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator != 0 && i < n - 1)
		{
			printf("%s", seperator);
		}
	}

	va_end(valist);

	printf("\n");
}
