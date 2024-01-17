#include "hash_tables.h"

/**
 * hash_table_get - A  function that retrieves a value associated with a key
 * @ht: Pointer to hash table
 * @key: The key you are searching for
 *
 * Return: The value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item, *temp;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index > ht->size)
		return (NULL);
	item = ht->array[index];

	temp = item;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
