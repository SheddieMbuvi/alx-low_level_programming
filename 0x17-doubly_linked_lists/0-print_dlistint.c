#include <stdio.h>
#include "lists.h"
#include <stdio.h>
/*
 * print_dlistint - function printing linked list
 * @h: the head node
 * Return: the linked list list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
