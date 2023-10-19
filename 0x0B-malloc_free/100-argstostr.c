/*
 * File: 100-argstostr.c
 * Auth: Peter
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
