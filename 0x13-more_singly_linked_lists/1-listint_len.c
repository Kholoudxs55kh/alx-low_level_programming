#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		h = h->next;
		elem++;
	}

	return (elem);
}
