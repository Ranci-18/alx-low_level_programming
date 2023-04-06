#include "hash_tables.h"
/**/
hash_table_t *hash_table_create(unsigned long int size)
{
    int i, size, count;
    hash_table_t *h_table = malloc(sizeof(hash_table_t));
    if (!h_table)
    {
        return (NULL);
    }
    h_table->size = size;
    h_table->count = 0;
    h_table->items = malloc(sizeof(hash_node_t));

    for (i = 0; i < h_table->size; i++)
    {
        h_table->items = NULL;
    }
    return (h_table);
}