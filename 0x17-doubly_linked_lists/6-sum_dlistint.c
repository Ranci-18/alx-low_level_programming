#include "lists.h"
/**
 *sum_dlistint - computes the sum of int data in linked list
 *@head: head node
 *
 *
 *Return: total sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total_n = 0;

	current = head;
	while (current != NULL)
	{
		total_n += current->n;
		current = current->next;
	}
	return (total_n);
}
