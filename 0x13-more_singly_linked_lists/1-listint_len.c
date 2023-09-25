/*
 * File: 1-listint_len.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: pointer to the first element of thr linked list
 *
 * Return: No of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes;

	count_nodes = 0;
	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
