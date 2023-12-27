#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head of the doubly linked list
 * Return: No of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *current;

	i = 0;
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
