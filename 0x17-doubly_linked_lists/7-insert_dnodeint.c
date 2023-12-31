#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points to the head of the linked list
 * @n: data to store at the node
 * @idx: index of node where data is to be stored
 * Return: addrress of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i = 0;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = current;
		if (current)
			current->prev = new;
		*h = new;
		return (new);
	}
	while (current)
	{
		if (idx - 1 == i)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
