#include <stdio.h>
#include "main.h"
/**
 * main - Start here
 * print_alphabet - Function name
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
