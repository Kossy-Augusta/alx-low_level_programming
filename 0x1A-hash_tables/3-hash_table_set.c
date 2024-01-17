#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: The hash table
 * @key: The string to be hashed
 * @value: Value to be stoed
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *current_index, *temp;
	hash_node_t *node;
	char *value_copy;
	unsigned long int index;

	/*Check if key is an empty string*/
	if (key == NULL || ht == NULL || *key == '\0'|| value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_index = ht->array[index];
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	temp = current_index;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return(1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}
	node->value = value_copy;
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_copy);
		free(node);
		return (0);
	}
	node->next = current_index;
	current_index = node;

		return (1);

}
