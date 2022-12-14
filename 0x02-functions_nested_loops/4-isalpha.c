#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Function for leters either lower or upper
 * @c: you input a character
 *
 * Return: 0 if letter capital or small otherwise return 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
