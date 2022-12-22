#include <stdio.h>
#include "main.h"
/**
 * _strncat - Function concanationg most parts of string
 * @dest: Input string
 * @src: input string
 * @n: integer
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
return (dest);
}
