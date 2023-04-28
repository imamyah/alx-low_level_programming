#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of node
 * @str: string to add
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *newnode;

	while (str)
		length++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = *head;
	*head = newnode;

	return (head);
}
