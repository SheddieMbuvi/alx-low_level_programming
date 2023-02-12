#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Fundtion reading text
 * @filename: name of file
 * @letters: characters being printed
 * Return: The actual number of charatcers
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrt, rd;
	char *buf;
	int opn;

	if (filename == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	if (opn < 0)
		return (0);

	buf = malloc(letters * sizeof(*buf));
	if (buf == NULL)
	{
		close(opn);
		return (0);
	}

	rd = read(opn, buf, letters);
	if (rd < 0)
	{
		close(opn);
		free(buf);
		return (0);
	}

	wrt = write(STDOUT_FILENO, buf, (size_t)rd);
	if (wrt < rd)
	{
		close(opn);
		free(buf);
		return (0);
	}

	close(opn);
	free(buf);
	return (wrt);
}
