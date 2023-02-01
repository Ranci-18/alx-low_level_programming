#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds a new node
 *@head: first node
 *@n: data element in node
 *
 *Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
