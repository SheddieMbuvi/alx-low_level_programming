#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fp = fopen("101-quote.c", "w");
	fwrite(str, 1, sizeof(str), fp);

	return (1);
}
