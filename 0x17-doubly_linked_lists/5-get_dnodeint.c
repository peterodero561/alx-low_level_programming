#include "lists.h"

/**
 * get_dnodeint_at_index - gets a specific node at a given index
 * @head: points to the head of a doubly linked list
 * @index: data in the node at index to return
 * Return: node of NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
