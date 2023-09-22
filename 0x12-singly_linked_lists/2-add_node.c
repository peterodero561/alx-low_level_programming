/*
 * File: 2-add_node.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * add_node - adds a new node at the begging of a list
 * @head: adress to the new node
 * @str: the sting of the new node
 *
 * Return: Adress of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	i = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new->str = malloc(sizeof(str) + 1);
	if (new->str == NULL)
	{
		free (new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new->str[i] = str[i];
		i++;
	}
	new->str[i] = '\0';
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
