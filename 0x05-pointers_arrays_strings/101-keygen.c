/*
 * File: 101-keygen.c
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - generates new random passwords
 *
 * Return: Always 0
 */

int main(void)
{
	int pass[64];
	int i;
	int sum;
	int n;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pass[i] = rand % 78;
		sum += pass[i] + '0';
		_puchar(pass[i] + '0');
		if ((2772 - sum) - sum - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}
	return (0);
}

