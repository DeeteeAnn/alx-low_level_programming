#include "main.h"

/**
 * read_textfile- Read text file to print it
 * @filename: name given to file
 * @letters: bytes to read
 * Return: printed bytes in number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc;
	char buf[READ_BUF_SIZE * 8];
	ssize_t units;

	if (filename == NULL || letters == 0)
		return (0);
	doc = open(filename, O_RDONLY);
	if (doc < 0)
		return (0);
	units = read(doc, &buf[0], letters);
	units = write(STDOUT_FILENO, &buf[0], units);
	close(doc);
	return (units);
}
