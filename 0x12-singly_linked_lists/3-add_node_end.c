/*
 * File: 3-add_node_end.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * list_t *add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the new node
 * @str: string in the new node
 * Return: adress of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new, *temp;

	i = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new->next = NULL;
	new->str = malloc(sizeof(str) + 1);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new->str[i] = str[i];
		i++;
	}
	new->str[i] = '\0';
	new->len = i;
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
