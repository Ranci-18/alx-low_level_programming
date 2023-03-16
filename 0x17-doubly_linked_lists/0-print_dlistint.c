#include "lists.h"
/**
 *print_dlistint - prints elements of a doubly linked list
 *@h: head node
 *
 *
 *Return: number of nodes in doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
