#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if lowercase and 0 for the rest
 */
int _islower(int c)
{
	if (c > 98 && c < 123)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
