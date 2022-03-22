#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
