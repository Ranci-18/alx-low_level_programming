#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - deletes the head node and returns its data
 *@head: head node
 *
 *
 *Return: data of head after deletion
 */
int pop_listint(listint_t **head)
{
	int hnode_data;
	listint_t *current;
	listint_t *h;

	if (*head != NULL)
	{
		current = *head;
		hnode_data = current->n;
		h = current->next;
		free(current);
		*head = h;
		return (hnode_data);
	}
	else
		return (0);
}
