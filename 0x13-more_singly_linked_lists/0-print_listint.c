/*
 * File: 0-print_listint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * print_listint - prints al  the elements of a listint_t list
 * @h: the pointer to the listint_t list
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes;

	count_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
