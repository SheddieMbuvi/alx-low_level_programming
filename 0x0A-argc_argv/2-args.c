#include <stdio.h>
#include "main.h"
/**
 * main - Function printing all arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
