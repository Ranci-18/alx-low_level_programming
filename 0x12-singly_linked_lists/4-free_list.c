#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees a linked list
 *@head: linked lis
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p->str);
		free(p);
	}
}
