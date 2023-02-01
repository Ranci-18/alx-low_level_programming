#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - adds the last node
 *@head: first node
 *@n: data value of the node
 *
 *Return: pointer of the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	current = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (*head);
}
