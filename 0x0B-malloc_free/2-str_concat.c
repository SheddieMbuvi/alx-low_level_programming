#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - function to concanate two strings
 * @s1: string one
 * @s2: string two
 * Return: two strings together
 */
char *str_concat(char *s1, char *s2)
{
	char *new, *str1, *str2;
	int len1 = 0, len2 = 0, i = 0;

	str1 = s1;
	str2 = s2;
	if (s1 == NULL)
	{
		len1++;
		s1++;
	}
	s1 = str1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = str2;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	str1 = new;
	if (new == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	new[i] = '\0';
	return (new);
}
