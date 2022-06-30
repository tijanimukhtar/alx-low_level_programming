#include "hash_tables.h"

/**
 * hash_table_create - this creates a hash table
 * @size: This is the size of the array
 *
 * Return: Returns the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int b;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (b = 0; b < size; b++)
		hash_table->array[b] = NULL;
	return (hash_table);
}
