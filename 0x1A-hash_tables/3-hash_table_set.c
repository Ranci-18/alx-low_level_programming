#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
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
		pair_el->value = (char *)value;
	}
	else
	{
		new_pair_el = malloc(sizeof(hash_node_t));
		if (new_pair_el == NULL)
			return (0);

		new_pair_el->key = (char *)key;
		new_pair_el->value = (char *)value;
		new_pair_el->next = pair_el->next;
		pair_el->next = new_pair_el;
	}
	free(ht);
	free(new_pair_el);
	return (1);
}
