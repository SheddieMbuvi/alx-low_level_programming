#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src input string
 * @n: input integer
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
