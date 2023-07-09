#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "cool");
	hash_table_set(ht, "stylist", "cool");
	hash_table_set(ht, "subgenera", "cool");
	hash_table_set(ht, "betty", "wee");
	return (EXIT_SUCCESS);
}
