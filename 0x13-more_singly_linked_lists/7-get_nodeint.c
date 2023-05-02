#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the head of list
 * @index: the index of the node
 *
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
