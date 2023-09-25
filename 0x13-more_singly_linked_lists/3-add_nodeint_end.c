/*
 * File: 3-add_nodeint_end.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to the first value of the linked list
 * @n: value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
