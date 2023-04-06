#include "hash_tables.h"
/**
 *key_index - finds the index using key and size
 *@key: key to find hash
 *@size: size of hasttable
 *
 *
 *Return: hash/index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}
