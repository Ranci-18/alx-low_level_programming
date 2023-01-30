#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node_end - adds a node at the end
 *@head: head node
 *@str: string to copy
 *
 *
 *Return: pointer to the node or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int ichar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (ichar = 0; str[ichar]; ichar++)
		;
	new->len = ichar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
