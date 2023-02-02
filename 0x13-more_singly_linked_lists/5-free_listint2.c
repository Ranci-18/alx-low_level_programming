#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - frees a linked list
 *@head: pointer to head pointer
 *
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
