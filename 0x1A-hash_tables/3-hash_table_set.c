#include "hash_tables.h"

/**
 * create_list - creates a node of a linked list
 * @key: The key
 * @value: value of the key
 *
 * Return: a pointer to the single node created or NULL is something goes wrong
 */
hash_node_t *create_list(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = (char *) malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	strcpy(node->key, key);

	node->value = (char *) malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}

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

	hash_node_t *current_index;
	hash_node_t *temp;
	hash_node_t *node;
	unsigned long int index;

	/*Check if key is an empty string*/
	if (key == NULL)
		return (0);
	node = create_list(key, value);
	if (node == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_index = ht->array[index];
	if (current_index == NULL)
	{
		/* Check if index is out of array bound*/
		if (index > ht->size)
			return (0);
		current_index = node;
		return (1);
	}
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			/*update key value if key already exists*/
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = (char *)value;
				return (1);
			}
			temp = temp->next;
		}
		node->next = current_index;
		current_index = node;
		return (1);

	}
}
