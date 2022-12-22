#include <stdio.h>
#include "main.h"
/**
 * _strcat - Function to concatenate two strings
 * @dest: Destination string
 * @src: string to concanate
 * Return: concanated string
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (new);
}
