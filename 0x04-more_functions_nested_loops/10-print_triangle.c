#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle
 *
 * Return: 0 Always
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
