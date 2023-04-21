#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: type of arguments passsed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist; char *str;
	unsigned int i = 0, j = 1;

	while (format != NULL)
	{
		va_start(valist, format);
		while (format[i] != 0)
		{
			switch (format[i])
			{
			case 'c': printf("%c", va_arg(valist, int));
				break;
			case 'i': printf("%d", va_arg(valist, int));
				break;
			case 'f': printf("%f", va_arg(valist, double));
				break;
			case 's': str = va_arg(valist, char *);
				if (str == 0)
					str = "(nil)";
				printf("%s", str);
				break;
			default: j = 0;
				break;
			}
			if (format[i + 1] && j)
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
