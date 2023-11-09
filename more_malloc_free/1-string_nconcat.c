#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: max number of charactere
 * Return: result of p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sX = 0;
	unsigned int sY = 0;
	char *p;

	if (s2 == NULL)
		{
		s2 = "";
		}
	while (s1[sX] != '\0')
		{
		sX++;
		}
	while (s2[sY] != '\0' && sY < n)
		{
		sY++;
		}
	p = malloc(sizeof(char) * (sX + sY + 1));
	if (p == NULL)
		{
		return (NULL);
		}
		sX = 0;
	while (s1[sX] != '\0')
		{
		p[sX] = s1[sX];
		sX++;
		}
	sY = 0;
	while (s2[sY] != '\0' && sY < n)
		{
		p[sX] = s2[sY];
		sX++;
		sY++;
		}
	p[sX] = '\0';

	return (p);
}
