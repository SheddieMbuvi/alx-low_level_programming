#include <stdio.h>
#include "main.h"
/**
 * _isupper - prints uppercase numbers
 * @c: input character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
