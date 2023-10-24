#include "main.h"
#include <stdio.h>

/**
 * swap_int - change &a, &b.
 * @a: ptr *a
 * @b: ptr *b
 *
 * Return:
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
