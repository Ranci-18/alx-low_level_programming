#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - returns the sum of all data elements in linked list
 *@head: first node
 *
 *
 *
 *Return: sum of data elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
