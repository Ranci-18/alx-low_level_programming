#include "lists.h"
/**
 *add_dnodeint_end - adds a node at the end of a linked list
 *@head: pointer to the head pointer
 *@n: value of new_node
 *
 *Return: address of new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
