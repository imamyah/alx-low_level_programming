#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: the heaf od the list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		head-> n += sum;
		head = head->next;
	}
	return (sum);
}
