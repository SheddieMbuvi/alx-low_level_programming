#include <stdio.h>
#include "main.h"
/**
 * rev_string - string printed in reverse
 * @s: the string being printed
 * Return: 00
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char x;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		x = s[i];
		s[i++] = s[len];
		s[len] = x;
	}
}
