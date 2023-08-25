/*
 * File: 7-leet.c
 * Auth: Peter
 */

#include "main.h"

/**
 * leet - encodes a string
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	char ltrs[] = "aAeEoOtTlL";
	char replc[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ltrs[j] == '\0'; j++)
		{
			if (s[i] == ltrs[j])
				s[i] = replc[j];
		}
	}
	return (s);
}
