#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - gets node at index
 *@head: head node/head of the list
 *@index: position of the node in linked list
 *
 *
 *Return: node at index or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
