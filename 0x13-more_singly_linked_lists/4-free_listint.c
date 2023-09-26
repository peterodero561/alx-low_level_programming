/*
 * File: 4-free_listint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer to the first element of the linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
