#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints integers of linked list
 *@h: first node
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
