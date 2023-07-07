#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		fprintf(stderr, "Error");
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
