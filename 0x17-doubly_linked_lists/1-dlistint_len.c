#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Function for number of elements in a doubly linked list.
 * @h: pointer to first element.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	int count = 0;

	new = h;
	while (new != NULL)
	{
		new = new->next;
		count++;
	}
	return (count);
}
