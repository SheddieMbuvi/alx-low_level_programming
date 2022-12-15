#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Funtion entry point
 *@n: the value of inputs
 *i: initialize number of outputs
 *Return: Always 0 Success
 */
void print_to_98(int n)

{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
