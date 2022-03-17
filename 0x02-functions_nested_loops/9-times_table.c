#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			product = a * b;
			_putchar(44);
			_putchar(32);
			if (product < 10)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
