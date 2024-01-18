#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int left, right, mid;
    left = 0;
    right = size - 1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: %d", array[left]);
        int i;
        for (i = left + 1; i <= right; i++)
            printf(", %d", array[i]);
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
