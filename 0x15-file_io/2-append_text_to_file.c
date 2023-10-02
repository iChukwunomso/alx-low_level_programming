#include "main.h"

/**
 * append_text_to_file - Appends the text at the end of a file
 *
 * @filename: A pointer
 *
 * @text_content: The string to add
 *
 * Return: If the function fails or filename is NULL return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c;
	int j;
	int len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	c = open(filename, O_WRONLY | O_APPEND);
	j = write(c, text_content, len);

	if (c == -1 || j == -1)
		return (-1);

	close(c);

	return (1);
}
