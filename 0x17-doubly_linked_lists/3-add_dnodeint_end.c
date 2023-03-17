#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint_end - Adds a new node at end.
 * @head: Pointer to first node.
 * @n: data.
 * Return: address of the new element, else NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newtail, *temp;

	newtail = malloc(sizeof(dlistint_t));
	if (newtail == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newtail->n = n;
		newtail->prev = NULL;
		newtail->next = NULL;
		*head = newtail;
		return (newtail);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	newtail->n = n;
	temp->next = newtail;
	newtail->prev = temp;
	newtail->next = NULL;
	return (newtail);
}
