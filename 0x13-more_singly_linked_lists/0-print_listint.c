#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: the pointer to next node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
