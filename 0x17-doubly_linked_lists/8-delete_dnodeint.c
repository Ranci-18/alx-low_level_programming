#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at a given index
 *@head: pointer to head pointer
 *@index: position of node to be deleted
 *
 *
 *
 *Return: 1 is successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev = NULL;
	size_t i = 0;

	if (*head == NULL || index < 1)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
		if (current == NULL)
		{
			return (-1);
		}
		
	prev->next = current->next;
	free(current);

	return (1);
}
