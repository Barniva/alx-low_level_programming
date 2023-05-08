#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 if the file exists. -1 if the file doesn't exist or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, r, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	r = write(p, text_content, l);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
