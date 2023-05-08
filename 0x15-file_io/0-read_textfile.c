#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: number of a letters to be read
 * Return: numbers of letters printed. It fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t la;
	ssize_t m;
	ssize_t j;

	la = open(filename, O_RDONLY);
	if (la == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(la, buf, letters);
	m = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(la);
	return (m);
}


