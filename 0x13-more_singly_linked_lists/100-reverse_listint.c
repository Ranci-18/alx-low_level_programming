#include <stdio.h>
#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: first node
 *
 *
 *Return: pointer to the reversed first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
