#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable of strings to be printed
 *
 * Return: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	char *j;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(valist, char*);

		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if (seperator != 0 && i < n - 1)
			printf("%s", seperator);
	}

	va_end(valist);

	printf("\n");
}
