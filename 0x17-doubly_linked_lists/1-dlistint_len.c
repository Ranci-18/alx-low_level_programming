#include "lists.h"
/**
 *dlistint_len - returns number of elements
 *@h: head node
 *
 *
 *
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
