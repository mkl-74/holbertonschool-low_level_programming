#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL(ON FAILURE)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (hash_table->array == NULL)
		return (NULL);
	return (hash_table);
}