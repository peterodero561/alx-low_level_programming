/*
 * File: 8-sum_listint.c
 * Auth: Peter
 */

#include "lists.h"

/**
 * sum_listint - sums up all the value of a linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: sum of all values of the linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *new;
	int sum;
	int i;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		new = head;
		sum += new->n;
		head = new->next;
		i++;
	}
	return (sum);
}
