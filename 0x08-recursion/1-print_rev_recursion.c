#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: string being printed
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}