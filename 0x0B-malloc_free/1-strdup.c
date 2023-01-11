#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - Function to duplicate string
 * @str: string being duplicated
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *new, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new = malloc(sizeof(char) * (len + 1));
	start = new;

	if (new != NULL)
	{
		for (; i < len; i++)
		{
			new[i] = *str;
			str++;
		}
		new[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
