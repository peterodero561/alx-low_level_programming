#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to a pointer of the head of a node
 *
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
