#include "lists.h"
/**
 *get_dnodeint_at_index - gets the nth node
 *@head: the head node
 *@index: position of the node
 *
 *Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *n_node;
	size_t n = 0;

	current = head;
	n_node = NULL;
	while (current != NULL)
	{
		if (n == index)
		{
			n_node = current;
			break;
		}
		current = current->next;
		n++;
	}
	return (n_node);
}
