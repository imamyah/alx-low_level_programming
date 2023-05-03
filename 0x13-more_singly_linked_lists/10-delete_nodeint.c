#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the index of the linked list
 * @head: the pointer to the head of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 in Success, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next2;
	unsigned int count = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next2 = temp->next->next;
	free(temp->next);
	temp->next = next2;
	return (1);
}
