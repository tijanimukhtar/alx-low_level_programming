#include "main.h"

/**
 * append_text_to_file - this appends text at the end of a file
 * @filename: this is the filename.
 * @text_content: this denotes the added content.
 *
 * Return: returns 1 if the file exists. -1 if otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		rwr = write(fp, text_content, n_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
