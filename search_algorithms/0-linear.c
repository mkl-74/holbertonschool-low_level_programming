#include "search_algos.h"

/**
 * linear_search - Recherche linéaire dans un tableau
 * @array: Pointeur vers le tableau
 * @size: Taille du tableau
 * @value: Valeur à rechercher dans le tableau
 *
 * Return: L'index de la première occurrence de la valeur dans le tableau,
 *         ou -1 si la valeur n'est pas présente.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}