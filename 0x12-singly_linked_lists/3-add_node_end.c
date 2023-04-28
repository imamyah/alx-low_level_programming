#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: the address of the new element
 * @str: the string to add
 *
 * Return: the address of the new element, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *newnode;
	list_t *temp = *head;

	while (str[length])
		length++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	return (newnode);

}
