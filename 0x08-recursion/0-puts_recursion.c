#include "main.h"
/**
 * _puts_recursion - Function to print a string
 * @s: string being printed
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
	_putchar('\n');
}
