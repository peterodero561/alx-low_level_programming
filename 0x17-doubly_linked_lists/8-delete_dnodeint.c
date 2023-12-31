#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: points to the head of the linked list
 * @index: index of node to delete
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (index - 1 == i)
		{
			if (current->next != NULL)
			{
				temp = current->next;
				current->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = current;
				free(temp);
				return (1);
			}
		}
		i++;
		current = current->next;
	}
	return (-1);
}
