#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to address of first node.
 * @n: data to be added.
 * Return: Address of new element or NULL otherwise.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newhead->n = n;
		newhead->prev = NULL;
		newhead->next = NULL;
		*head = newhead;
		return (newhead);
	}
	newhead->n = n;
	newhead->next = *head;
	newhead->next->prev = newhead;
	newhead->prev = NULL;
	*head = newhead;

	return (newhead);
}
