#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using mallloc
 * @b: the size of the memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
