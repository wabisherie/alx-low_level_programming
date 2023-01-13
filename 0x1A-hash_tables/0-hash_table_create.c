#include "hash_tables.h"

/**
 *hash_tables_create - creates a new table
 *@size - the size as in number of nodes needed to create the table
 *
 *Return - a pointer to the hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");

		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");

		return (NULL);
	}


	for (; i < size; i++)

		ht->array[i] = NULL;

	return (ht);
}
