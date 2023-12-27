#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: points to the head of a list
 * @n: data to put in the list
 * Return: address of the new element or NULL if it if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	new->prev = current;
	current->next = new;
	return (new);
}
