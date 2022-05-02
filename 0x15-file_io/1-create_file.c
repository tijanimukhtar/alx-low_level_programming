#include "main.h"

/**
 * create_file - this creates a file
 * @filename: denotes the filename.
 * @text_content: denotes content written in the file.
 *
 * Return: return 1 if it success. -1 if otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	rwr = write(fd, text_content, n_letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
