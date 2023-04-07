#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table of size @size
 *@size: size of hash table
 *
 *
 *Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *h_table = malloc(sizeof(hash_table_t));

	if (!h_table)
	{
	return (NULL);
	}
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t));

	for (i = 0; i < h_table->size; i++)
	{
		h_table->array[i] = NULL;
	}
	return (h_table);
}
