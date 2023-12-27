#include "lists.h"

/**
 * dlistint_len - prints all the elements of a doubly linked list
 * @h: head of the doubly linked list
 * Return: No of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *current;

	i = 0;
	current = h;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
