#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function printing name
 * @name: the name
 * @f: name pointed
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
