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
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = srclen++;

	*dest = '\0';
	return (temp);
}
