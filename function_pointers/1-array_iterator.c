#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *
 * array_iterator -  executes a function given as a parameter on each element of an array.
 * @array: ptr array
 * @action: ptr structur
 * @size: case of array
 *
 * return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}


}
