#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char i, Up;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	for (Up = 'A'; Up <= 'z'; Up++)
	{
		putchar(Up);
	}
	putchar('\n');

	return (0);
}
