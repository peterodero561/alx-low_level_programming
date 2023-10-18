#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: he address of the node where the loop
 * starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currents, *currentf;

	if (head == NULL)
		return (NULL);

	currents = currentf = head;
	do {
		if (currents->next)
			currents = currents->next;
		else
			return (NULL);

		if (currentf->next->next)
			currentf = currentf->next->next;
		else
			return (NULL);
	} while (currentf != currents);

	currents = head;
	while (currentf != currents)
	{
		currentf = currentf->next;
		currents = currents->next;
	}

	return (currents);
}
