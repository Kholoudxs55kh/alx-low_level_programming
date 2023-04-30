#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer
 * Return: n Or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
