#include "lists.h"

/**
 * add_dnodeint - adds node in the head of a doubly linked list
 * @head: points to the head of a list
 * @n: data to add in the list
 * Return: address of the new element or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
