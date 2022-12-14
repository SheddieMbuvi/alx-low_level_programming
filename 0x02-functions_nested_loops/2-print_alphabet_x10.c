#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	
	while (i = '0'; i <= '9'; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
