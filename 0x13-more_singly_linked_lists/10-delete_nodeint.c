#include "lists.h"
/**
 * delete_nodeint_at_index - Function to delete node at index
 * @head: the pointer to heaad node
 * @index: the node to be deleted
 * Return: (-1) on fail, (1) on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = *head;

	*head = malloc(sizeof(listint_t));
	if (head == NULL)
		return (-1);
	else if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 1)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
