#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * return 0
 */
int main(void)
{
	int i;

	char test[9] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(test[i]);
	}
	_putchar('\n');

	return 0;
}
