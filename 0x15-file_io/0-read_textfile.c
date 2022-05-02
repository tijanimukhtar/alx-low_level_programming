#include "main.h"

/**
 * read_textfile - this reads a text file and 
 * prints the letters
 * @filename: this denotes the filename.
 * @letters: this denotes the numbers of letters printed.
 *
 * Return: returns numbers of letters printed. 
 * returns 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nrd, nwr;
	char *buf_;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf_ = malloc(sizeof(char) * (letters));
	if (!buf_)
		return (0);

	nrd = read(fp, buf_, letters);
	nwr = write(STDOUT_FILENO, buf_, nrd);

	close(fp);

	free(buf_);

	return (nwr);
}
