#include "lists.h"
/**
 *free_dlistint - frees a linked list
 *@head: head node, start of linked list
 *
 *Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
