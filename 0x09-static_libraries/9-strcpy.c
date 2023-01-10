#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to
 * @dest: where pointer is returned
 * @src: the pointer
 * Return: success
 */
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src)
		*dest++ = *src++;
	return (i);
}
