/*
 * File: 5-free_listint2.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to the first element of the linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t **new;

	while (*head != NULL)
	{
		new = head;
		*head = (*head)->next;
		free(*new);
	}
	*head = NULL;
}
