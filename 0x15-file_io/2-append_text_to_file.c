#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - Function appending text at the end
 * @filename: Name of the file
 * @text_content: text to be appended
 * Return: 1 on success and -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);

	return (1);
}
