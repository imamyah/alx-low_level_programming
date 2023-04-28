#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of elementsin the list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h->str;
		h->len;
		h = h->next;
		i++;
	}
	return (i);
}
