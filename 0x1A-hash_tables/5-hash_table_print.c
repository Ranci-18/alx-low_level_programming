#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: hash table to print
 *
 *
 *
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = j; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (j == 0)
				printf("%s'%s': '%s'", "", node->key, node->value);
			else
				printf(", '%s': '%s'", node->key, node->value);
			j++;
			node = node->next;
		}
	}
	printf("}\n");
}
