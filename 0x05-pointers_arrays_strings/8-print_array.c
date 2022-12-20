#include <stdio.h>
#include "main.h"
/**
 * print_array - printing array of n elements
 * @n: number of elements
 * @a: elements being printed
 * Return: array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
