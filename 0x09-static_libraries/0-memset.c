#include "main.h"
#include <stdio.h>
/**
 * _memset - Function that fills mem wit const byte
 * @s: pointer to mem
 * @b: contant
 * @n: bytes of the memory
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
