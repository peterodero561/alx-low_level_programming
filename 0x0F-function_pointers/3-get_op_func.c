/*
 * File: 3-get_op_func.c
 * Auth: Peter
 */

#include "3-calc.h"
#include <stdef.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function
 * to perform the operartion asked bt the user
 * @s: operation to be done
 *
 * Return: pointer to another function
 */

int (*get_op_func(char *s))(int, int)
{
	while (s != '\0')
	{
		if (s == '+')
			return (get_op_func = op_add);
		else if (s == '-')
			return (get_op_func = op_sub);
		else if (s == '*')
			return (get_op_func = op_mul);
		else if (s == '/')
			return (get_op_func = op_div);
		else if (s == '%')
			return (get_op_func = op_mod);
		printf("Error");
		return (NULL);
	}
}
