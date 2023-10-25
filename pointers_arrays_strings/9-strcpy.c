#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy the string pointed to, by src to dest.
 * @dest: blabla
 * @src: blabla
 *
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 *
 * 
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}}
