#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	char test[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(test[i]);
	}
	_putchar('\n');

	return (0);
}
