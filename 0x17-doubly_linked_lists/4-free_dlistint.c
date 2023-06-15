#include "lists.h"
/**
 * free_dlistint - .
 * @head: .
 * Return: .
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodeToFree = head;

	while (nodeToFree)
	{
		head = nodeToFree->next;
		free(nodeToFree);
		nodeToFree = head;
	}
}
