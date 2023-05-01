#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: the pointer to next node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint *h)
{
	int count = 0;

	while (h)
	{
		h->n;
		h->next;
		printf("%d\n%d\n", n, next);
		h = h->next;
		count++;
	}
	return (count);
}
