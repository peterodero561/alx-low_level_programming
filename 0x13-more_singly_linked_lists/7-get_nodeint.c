/*
 * File: 7-get_nodeint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the linked list
 * @index: of the node to return
 *
 * Return: node at the @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new;

	i = 0;
	while (head != NULL)
	{
		if (index == i)
		{
			new = head;
			return (new);
		}
		new = head;
		head = new->next;
		i++;
	}
	return (NULL);
}
