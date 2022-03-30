#include "main.h"

/**
 *reverse_array - Reverses contents of an array of integers
 *@a: Pointer to first element
 *@n: Number of elements
 *
 * Return: Void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
