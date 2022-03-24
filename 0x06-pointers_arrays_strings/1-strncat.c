#include "mian.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
