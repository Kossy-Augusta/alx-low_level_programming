#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: This is the size of the hash table
 *
 * Return: pointer to the newly created hash table or NULL if something goes
 * wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t**) calloc(size, sizeof(hash_node_t*));
	if (table->array == NULL)
		return (NULL);

	/* Initialize all the array members to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
