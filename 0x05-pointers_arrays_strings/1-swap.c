#include <stdio.h>
#include "main.h"
/**
 * swap_int - function to swap integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: swaped ints
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
