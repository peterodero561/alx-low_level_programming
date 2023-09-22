/*
 * File: 1-list_len.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * list_len - returns the number of elements in alinked list_t
 * @h: pointer to the fist node of the linked list
 *
 * Return: No of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
