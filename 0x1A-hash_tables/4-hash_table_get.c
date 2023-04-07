#include "hash_tables.h"
/**
 *hash_table_get - retrieves value associated with key
 *@ht: hash table
 *@key: key
 *
 *
 *
 *Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}
	if (node == NULL || strcmp(node->key, key) != 0)
		return (0);

	return (node->value);
}
