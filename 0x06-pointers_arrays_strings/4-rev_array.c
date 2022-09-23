#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @n: number of elements in the array
 *
 * @a: pointer to the array of integers
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
