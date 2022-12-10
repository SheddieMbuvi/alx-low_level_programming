#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
char main (void)
{
	FILE *fp;
	char chars[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fp = fopen("file.txt", "w");
	fwrite(chars, 1, sizeof(chars), fp);

	fclose(fp);

	return (1);
}
