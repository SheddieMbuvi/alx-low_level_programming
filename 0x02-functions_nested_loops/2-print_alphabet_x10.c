#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = '0';
	
	while (i <= '9')
	{
		char ch;

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

	_putchar('\n');
	i++;
	}
}
