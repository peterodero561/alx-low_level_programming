/*
 * File: 9-insert_nodeint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - insrts a new node at a given position
 * @head: pointer to a pointer of the first element of the linked list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node OR NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	i = 0;
	current = *head;
	new->n = n;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
