#include "hash_tables.h"
/**
 *hash_table_set - sets a new element to the hash table
 *@ht: the hashtable
 *@key: key
 *@value: value to set
 *Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_pair_el, *pair_el;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	pair_el = ht->array[index];

	while (pair_el != NULL && strcmp(pair_el->key, key) != 0)
	{
		pair_el = pair_el->next;
	}
	if (pair_el != NULL)
	{
		if (strcmp(pair_el->value, value) != 0)
		{
			free(pair_el->value);
			pair_el->value = strdup(value);
		}
	}
	else
	{
		new_pair_el = create_node(key, value);
		if (new_pair_el == NULL)
			return (0);
		new_pair_el->next = ht->array[index];
		ht->array[index] = new_pair_el;
	}
	return (1);
}
/**
 *create_node - creates a new node
 *@key: key
 *@value: value to write to new node
 *
 *
 *Return: created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL || value == NULL)
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	return (node);
}
