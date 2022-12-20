#include <stdio.h>
#include "main.h"
/**
 * print_rev - Function printing in reverse
 * @s: String being printed in reverse
 * Return: string reversed
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
