/*
 * File: 2-add_nodeint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a listint_t list
 * @head: pointer to the start of the list
 * @n: value of the new list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
