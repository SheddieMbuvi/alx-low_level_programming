#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function to  print lenght of string
 * @s: the stinr being printed
 * @n: Length of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
				return (0);
				}
