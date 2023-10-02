#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file
 *
 * @filename: A pointer to the name
 *
 * @text_content: A pointer to a string
 *
 * Return: If the function fails 1
 */

int create_file(const char *filename, char *text_content)
{
	int f_d;
	int j;
	int len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(f_d, text_content, len);

	if (f_d == -1 || j == -1)
		return (-1);

	close(f_d);

	return (1);
}
