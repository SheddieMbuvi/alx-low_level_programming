#include <stdio.h>
#include "main.h"
/**
 * _islower - function entry point
 * Compaare if a character is small or a capital letter
 * Return: Always 0 (iscapital) or 1 (lower)
 */
int _islower(int c)
{
	char ch;
	int i = 1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
		i = 0;
		}
	}
return (i);
}
