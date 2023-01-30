#include <stdio.h>
#include "lists.h"
/**
 *list_len - returns number of elements in linked list
 *@h: linked list
 *
 *
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	unsigned int len = 0;

	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return (len);
}
