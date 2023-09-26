/*
 * File: 6-pop_listint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list and returns the head of node's data(n)
 * @head: Pointer to a pointer of the first element in the linked list
 *
 * Return: head->n of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *new;

	if (*head == NULL)
		return (0);
	else
	{
		new = *head;
		free(head);
	}
	return (new->n);
}
