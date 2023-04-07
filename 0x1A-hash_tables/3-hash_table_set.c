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
	int index;
	hash_node_t *new_pair_el, *pair_el;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	pair_el = ht->array[index];

	while (pair_el->next != NULL && strcmp(pair_el->key, key) != 0)
		pair_el = pair_el->next;
	
	if (strcmp(pair_el->key, key) == 0)
	{
		if (strcmp(pair_el->value, value) != 0)
		{
			free(pair_el->value);
			pair_el->value = strdup(value);
		}
	}
	return (1);
	
	new_pair_el = malloc(sizeof(hash_node_t));
	if (new_pair_el == NULL)
		return (0);

	new_pair_el->next = NULL;
	new_pair_el->key = strdup(key);
	if (new_pair_el->key == NULL)
	{
		free(new_pair_el);
		return (0);
	}
	new_pair_el->value = strdup(value);
	if (new_pair_el-> value == NULL)
	{
		free(new_pair_el->key);
		free(new_pair_el);
		return (0);
	}
	new_pair_el->next = ht->array[index];
	ht->array[index] = new_pair_el;
	
	return (1);
}
