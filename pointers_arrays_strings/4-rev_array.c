#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse the content of the array
 * @a: array
 * @n: index
 *
 *
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
