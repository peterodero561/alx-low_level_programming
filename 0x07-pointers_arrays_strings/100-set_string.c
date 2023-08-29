/*
 * File: 100-set_string.c
 * Auth: Peter
 */

#include "main.h"

/**
 * set_string - prints the value of a pointer to a char
 * @s: pointer to copy to
 * @to: pointer to copy from
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
