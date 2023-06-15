#include "lists.h"
/**
 * get_dnodeint_at_index - .
 * @head: .
 * @index: .
 * Return: .
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node = head;
	unsigned int NodeNum = 0;

	while (new_node != NULL && NodeNum < index)
	{
		new_node = new_node->next;
		NodeNum++;
	}
	return (new_node);
}
