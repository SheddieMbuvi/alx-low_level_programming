#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Funtion entry point
 *@n: the value of inputs
 *i: initialize number of outputs
 *Return: Always return 0 Success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}
	}
	else
	{
		for (n = n; n> 98; n--)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}
	}
}
