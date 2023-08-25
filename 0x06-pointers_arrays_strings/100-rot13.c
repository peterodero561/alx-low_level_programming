/*
 * File: 100-rot13.c
 * Auth: Peter
 */

#include "main.h"

/**
 * rot13 - encodes a message using by simple shift cipher of 13
 *
 * Return: encoded message
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		while ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
		{
			if ((c[i] >= 'N' && c[i] <= 'Z') || (c[i] >= 'n' && c[i] <= 'z'))
				c[i] -= 13;
			else
				c[i] += 13;
		}
	}
	return (c);
}
