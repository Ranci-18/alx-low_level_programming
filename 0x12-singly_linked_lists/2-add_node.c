#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node - add a new node
 *@head: head pointer
 *@str: string to duplicate
 *
 *
 *Return: pointer to head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int ichar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (ichar = 0; str[ichar]; ichar++)
		;
	new->len = ichar;
	new->next = *head;
	*head = new;

	return (*head);
}
