#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Function deleting head node
 * @head: Pointer to head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (n);
}
