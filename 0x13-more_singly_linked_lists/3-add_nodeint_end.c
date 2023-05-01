#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the head of the list
 * @n: the data to add to the list
 *
 * Return: the address of the new element, otherwise NULL in failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend;
	listint_t *temp = *head;

	newend = malloc(sizeof(listint_t));
	if (newend == NULL)
		return (NULL);

	newend->n = n;
	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newend;

	return (newend);
}
