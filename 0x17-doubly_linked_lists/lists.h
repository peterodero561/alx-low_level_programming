#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @prev: points to the prevuios node
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
	struct listint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
