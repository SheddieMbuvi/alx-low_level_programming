#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if a character is lowercase function entry point
 * Compaare if a character is small or a capital letter
 * @c: is th integer value to be compared with ASCII value
 * Return: Always 0 (iscapital) or 1 (lower)
 */
int _islower(int c)
{
	char ch;
	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
		i = 1;
		}
	}
return (i);
}
