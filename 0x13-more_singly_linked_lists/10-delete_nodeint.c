/*
 * File: 10-delete_nodeint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to a pointer of the first element of the linked list
 * @index: index of the list where the new node should be added
 *
 * Return: address of the new node OR NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *new;
	unsigned int i;

	if (head == NULL)
		return (-1);
	current = *head;
	i = 0;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	new = current->next;
	current->next = new->next;
	free(new);
	return (1);
}
