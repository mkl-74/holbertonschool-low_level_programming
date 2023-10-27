#include "main.h"

/**
 * _strncat - add src to end dest and overwrite '\0'
 * @dest: 
 * @src:
 *
 *Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0') {
	dest++;
	}

	while (*src != '\0' && n > 0) {
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';

	return (dest);
}

