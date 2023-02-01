#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free a singly linked list
 *@head: first node
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		 head = head->next;
		 free(node);
	}
}
