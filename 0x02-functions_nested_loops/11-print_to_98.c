#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 *
 * @n: starting integar
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("d%", n);
			printf(", ");
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("d%", n);
			printf(", ");
		}
	}
	else
	{
		printf("98\n");
	}
}
