#include "main.h"
/**
 * main - Start here
 *
 * Return: Always return 0 (Success)
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}
