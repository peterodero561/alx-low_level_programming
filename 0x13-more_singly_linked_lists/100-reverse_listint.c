/*
 * File: 100-reverse_int.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: pointer to the first node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp = *head;
	temp2 = NULL;
	while (temp != NULL)
	{
		listint_t *next = temp->next;
		temp->next = temp2;
		temp2 = temp;
		temp = next;
	}
	*head = temp2;
	return (*head);
}
