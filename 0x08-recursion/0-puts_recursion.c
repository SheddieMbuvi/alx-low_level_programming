#include "main.h"
/**
 * _puts_recursion - Function to print a string
 * @s: string being printed
 * Return: string
 */
void _puts_recursion(char *s)
{
	char *s[] = "Puts with recursion";

	_puts(s);
	_putchar('\n');
}
