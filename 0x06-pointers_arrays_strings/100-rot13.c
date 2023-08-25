/*
 * File: 100-rot13.c
 * Auth: Peter
 */

#include "main.h"

/**
 * rot13 - encodes a message using by simple shift cipher of 13
 * @c: message to encode
 *
 * Return: encoded message
 */

char *rot13(char *c)
{
	int i;
	char store_capital[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char store_small[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		while ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			if (c[i] = (c[i] - 65 > 25))
				store_small[c[i] - 97];
			else 
				store_capital[c[i] - 65];
		}
	}
	return (c);
}
