#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: the pointer to the head of the list
 * @idx: the index of the list
 * @n: the data to insert in the node
 *
 * Return: the address of the new node, otherwise NULL in failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
