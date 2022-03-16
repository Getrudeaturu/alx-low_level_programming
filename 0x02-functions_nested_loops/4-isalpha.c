#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c > 66 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
