#include "lists.h"

/**
 * listint_len - returns the elements in a linked listint_t list
 * @h: the head of the list to print
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
