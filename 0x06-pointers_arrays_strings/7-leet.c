/*
 * File: 7-leet.c
 * Auth: Peter
 */

#include "main.h"

/**
 * leet - encodes a string
 * @c: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i ++)
	{
		while ( c[i] == 'a' || c[i] == 'A')
			c[i] = '4';
		while ( c[i] == 'e' || c[i] == 'E')
			c[i] = '3';
		while ( c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		while ( c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		while ( c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
	}
	return (c);
}
