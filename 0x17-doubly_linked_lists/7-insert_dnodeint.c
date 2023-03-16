#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at idx
 *@h: pointer to head pointer
 *@idx: position of the new node
 *@n: new node data
 *
 *Return: NULL if it fails to add new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	size_t i = 0;

	current = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
