#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This prints n times table, starting with 0
 * Return: 0
 */
void print_times_table(int n)
{
	int i;

	if (n > 0 && n <= 15)
	{
		while(i < n)
		{
		for (i = 1; i <= n; i++)
		{
			printf("%d\n", (n*i));
		}
		}	
	}
}
