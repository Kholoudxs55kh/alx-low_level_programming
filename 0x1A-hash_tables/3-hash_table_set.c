#include "hash_tables.h"

/**
 * create_new_node - creates a new node
 * @key: the key to the val
 * @value: the value associated to the key
 * Retuen: new node
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_table_t));

	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if ((!new_node->key) || (!new_node->value))
	{
		free(new_node);
		free(new_node->key);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add in
 * @key: the key to the val
 * @value: the value associated to the key
 * Return: 1, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *node;
	char *new_val;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || ht->array == NULL
		|| key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while(node)
	{
		if (strcmp(node->key, key) == 0)
		{
			new_val = strdup(value);
			if(!new_val)
				return (0);
			free(node->value);
			node->value = new_val;
			return (1);
		}
		node = node->next;
	}
	hash_node = create_new_node(key, value);
	if (!hash_node)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
