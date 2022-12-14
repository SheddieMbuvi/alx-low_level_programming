#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always return 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
