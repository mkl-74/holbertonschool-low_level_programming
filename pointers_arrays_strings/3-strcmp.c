#include "main.h"

/**
 * strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: difference
 *
 */
int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int dif = 0;

	while (dif == 0)
	{
		if ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
		break;

		dif = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (dif);
}
