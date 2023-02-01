#include <stdio.h>
#include "lists.h"
/**
 *listint_len - returns number of elements
 *@h: first node
 *
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
