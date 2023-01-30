#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints all elements of singly linked list
 *
 *@h: singly linked list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	unsigned int len = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		len++;
	}
	return (len);
}
