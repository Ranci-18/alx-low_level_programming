#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes a node at a given index
 *@head: head node/first node
 *@index: position of the node starting from 0
 *
 *
 *Return: 1 if successfully deleted node or -1 of not deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *next;
	unsigned int i;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
