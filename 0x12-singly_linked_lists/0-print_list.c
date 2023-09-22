/*
 * File: 0-print_list.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * print_list - prints all the elements of a list list_t
 * @h: pointer to a list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
