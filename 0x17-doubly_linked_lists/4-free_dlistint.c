#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: points to the head of a list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		current->next = NULL;
		current->prev = NULL;
		free(current);
	}
}
