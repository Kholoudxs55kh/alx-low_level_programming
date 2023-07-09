#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the table to be printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *seperator = "";

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", seperator, node->key, node->value);
			seperator = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
