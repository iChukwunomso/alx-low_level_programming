#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile- Read text file print to STDOUT
 *
 * @filename: name of file being read
 *
 * @letters: number of letters to be read and print
 *
 * Return: actual no of bytes it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t c;
	ssize_t j;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	j = read(file_d, buffer, letters);
	c = write(STDOUT_FILENO, buffer, j);

	free(buffer);
	close(file_d);
	return (c);
}
